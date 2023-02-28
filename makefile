# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 17:27:46 by mel-kouc          #+#    #+#              #
#    Updated: 2023/02/28 17:40:15 by mel-kouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

src = Mandatory/main.c

OSRC = $(SRC:.c=.o)

CC = cc

LIBFT = libft/libft.a
PRINTF = ft_printf/libftprintf.a
CFLAGS = -Wall -Wextra -Werror

$(NAME) : $(OSRC)
	@make -C ft_printf/
	@make -C libft/
	@$(CC) $(CFLAGS) $(OSRC)  $(PRINTF) $(LIBFT)  -o $(NAME)
	@echo "*** {Compaling Mandatory ...} ***"

# bonus: $(OBONUS)
# 	@make -C libft/
# 	@make -C ft_printf/
# 	@$(CC) $(CFLAGS) $(MLX) $(OBONUS)  $(PRINTF) $(LIBFT)  -o $(BNAME)
# 	@echo "*** {Compaling Bonus ...} ***"


%.o: %.c Mandatory/push_swap.h
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "*** {Compaling Files ...} ***"

clean :
	@rm -rf $(OSRC)
	@rm -rf libft/*.o ft_printf/*.o
	@echo "*** {remove objects files ...} ***"
	
fclean : clean
	@rm -rf $(NAME) $(LIBFT) $(PRINTF)
	@echo "*** {remove executable files and clean all files...} ***"

re : fclean all

# .phony : re fclean clean all