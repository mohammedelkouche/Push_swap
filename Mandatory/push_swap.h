/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:37:32 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/14 17:10:41 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

// typdef struct	s_l {
//     int				value;
//     struct s_list	*next;
// }    t_l;

// typdef struct	s_stack {
//     int				*content;
//     int				*head;
//     int				size;
// }    t_stack;

char	*ft_strxjoin(char *data, char *buffer);
void	ft_error(void);
int		chek_space(char **av);
int		check_digit(char **arg);
int		*convert_to_int(int nbr, char **arg);
void	free_error(char **divide);
t_list	*creat_list(int *table, t_list *stack_a, int size);
int		nbr_divide(char **divide);
int		arg_len(char *arg);
int		*parsing_functions(char **av, char *join, int *size);
int		check_is_sort(t_list *stack_a);
void	instructions(t_list *stack_a, t_list *stack_b, int size);
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
int		get_min(t_list **stack_a);
int		get_prev_min(t_list **stack_a, int min);
// t_list	*get_min(t_list **stack_a);
// t_list	*get_prev_min(t_list **stack_a, t_list	*min);
#endif