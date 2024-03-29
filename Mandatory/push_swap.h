/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:37:32 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/22 01:26:35 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

char	*ft_strxjoin(char *data, char *buffer);
void	ft_error(void);
int		chek_space(char **av);
int		check_digit(char **arg);
int		*convert_to_int(int nbr, char **arg);
void	free_error(char **divide);
void	free_divide(char **divide);
t_list	*creat_list(int *table, t_list *stack_a, int size);
int		nbr_divide(char **divide);
int		*parsing_functions(char **av, char *join, int *size);
int		check_is_sort(t_list *stack_a);
void	instructions(t_list **stack_a, t_list **stack_b);
void	swap_a(t_list **stack_a, int flag);
void	push_a(t_list **stack_a, t_list **stack_b);
void	rotate_a(t_list **stack_a, int flag);
void	rra(t_list **stack_a, int flag);
void	swap_b(t_list **stack_b, int flag);
void	push_b(t_list **stack_a, t_list **stack_b);
void	rotate_b(t_list **stack_b, int flag);
void	rrb(t_list **stack_b, int flag);
void	s_a_s_b(t_list **stack_a, t_list **stack_b);
void	rt_a_rt_b(t_list **stack_a, t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	get_min_index(t_list **stack_a, int size, int i);
t_list	*get_min(t_list **stack_a);
t_list	*get_prev_min(t_list **stack_a, t_list	*min);
void	fill_stack_b(t_list **a, t_list **b, int size, int j);
int		size_of_stack(t_list **stack);
void	simple_sort(t_list **a, t_list **b, t_list *min, t_list *p_min);
void	convert_to_top(t_list **stack, t_list	*node);
t_list	*get_max(t_list **stack_a);
void	position_node(t_list **stack);
void	convert_top_b(t_list **stack, t_list	*node);
void	stack_a_sorted(t_list **a, t_list **b);
int		check_divisor(int size);
void	free_list(t_list *a);

#endif