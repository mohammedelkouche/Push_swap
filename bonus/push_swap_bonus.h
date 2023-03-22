/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:48:00 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/22 01:33:00 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

void	ft_error(void);
int		chek_space(char **av);
char	*ft_strxjoin(char *data, char *buffer);
int		check_digit(char **arg);
int		*convert_to_int(int nbr, char **arg);
void	free_error(char **divide);
void	free_divide(char **divide);
t_list	**creat_list(int *table, t_list **stack_a, int size);
int		nbr_divide(char **divide);
int		*parsing_functions(char **av, char *join, int *size);
int		check_is_sort(t_list *stack_a);
void	instructions(t_list **stack_a, t_list **stack_b);
void	swap_a(t_list **stack_a);
void	push_a(t_list **stack_a, t_list **stack_b);
void	rotate_a(t_list **stack_a);
void	rra(t_list **stack_a);
void	swap_b(t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);
void	rotate_b(t_list **stack_b);
void	rrb(t_list **stack_b);
void	s_a_s_b(t_list **stack_a, t_list **stack_b);
void	rt_a_rt_b(t_list **stack_a, t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
int		size_of_stack(t_list **stack);
void	free_list(t_list *a);
void	compare_op(t_list **stack_a, t_list **stack_b, char *str);

#endif