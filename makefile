# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 17:27:46 by mel-kouc          #+#    #+#              #
#    Updated: 2023/03/22 01:25:46 by mel-kouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BNAME = checker

SRC = Mandatory/main.c Mandatory/error.c Mandatory/parsing.c Mandatory/strjoin.c Mandatory/creatlist.c   \
	Mandatory/nb_len_arg.c Mandatory/check_sort.c Mandatory/instructions.c Mandatory/op_stack_a.c	\
	Mandatory/op_stack_b.c Mandatory/op_stack_a_b.c	Mandatory/min_pr_min.c Mandatory/hard_sort.c	\
	Mandatory/simple_sort.c Mandatory/utile_inst.c

BONUS = bonus/main_bonus.c bonus/error_bonus.c bonus/parsing_bonus.c bonus/creatlist_bonus.c   \
	bonus/nb_len_arg_bonus.c bonus/check_sort_bonus.c bonus/op_stack_a_bonus.c	\
	bonus/op_stack_b_bonus.c bonus/op_stack_a_b_bonus.c bonus/compare_op_bonus.c

OSRC = $(SRC:.c=.o)
OBONUS = $(BONUS:.c=.o)

CC = cc

LIBFT = libft/libft.a
PRINTF = ft_printf/libftprintf.a
CFLAGS = -Wall -Wextra -Werror

HEADERS = Mandatory/push_swap.h
HEADER_S = bonus/push_swap_bonus.h

all: $(NAME)

$(NAME) : $(OSRC) 
	@make -C ft_printf/
	@make bonus -C libft/
	@$(CC) $(CFLAGS) $(OSRC)  $(PRINTF) $(LIBFT)  -o $(NAME)
	@echo "*** {Compaling Mandatory ...} ***"

bonus: $(OBONUS)
	@make -C ft_printf/
	@make bonus -C libft/
	@$(CC) $(CFLAGS) $(OBONUS) $(PRINTF) $(LIBFT)  -o $(BNAME)
	@echo "*** {Compaling Mandatory ...} ***"

%.o: %.c $(HEADER_S) $(HEADERS)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "*** {Compaling Files ...} ***"

clean :
	@rm -rf $(OSRC) $(OBONUS)
	@rm -rf libft/*.o ft_printf/*.o
	@echo "*** {remove objects files ...} ***"
	
fclean : clean
	@rm -rf $(NAME) $(BNAME) $(LIBFT) $(PRINTF)
	@echo "*** {remove executable files and clean all files...} ***"

re : fclean all
# 