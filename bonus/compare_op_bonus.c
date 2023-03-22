/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_op_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:34:24 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/21 21:10:40 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	compare_op(t_list **stack_a, t_list **stack_b, char *str)
{
	if (!ft_strncmp(str, "sa\n", 3))
		swap_a(stack_a);
	else if (!ft_strncmp(str, "pa\n", 3))
		push_a(stack_a, stack_b);
	else if (!ft_strncmp(str, "ra\n", 3))
		rotate_a(stack_a);
	else if (!ft_strncmp(str, "rra\n", 4))
		rra(stack_a);
	else if (!ft_strncmp(str, "sb\n", 3))
		swap_b(stack_b);
	else if (!ft_strncmp(str, "pb\n", 3))
		push_b(stack_a, stack_b);
	else if (!ft_strncmp(str, "rb\n", 3))
		rotate_b(stack_b);
	else if (!ft_strncmp(str, "rrb\n", 4))
		rrb(stack_b);
	else if (!ft_strncmp(str, "ss\n", 3))
		s_a_s_b(stack_a, stack_b);
	else if (!ft_strncmp(str, "rr\n", 3))
		rt_a_rt_b(stack_a, stack_b);
	else if (!ft_strncmp(str, "rrr\n", 4))
		rrr(stack_a, stack_b);
	else
		ft_error();
}
