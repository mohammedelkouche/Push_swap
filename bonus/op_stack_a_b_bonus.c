/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_stack_a_b_bonuc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:12:46 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/20 23:44:29 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	s_a_s_b(t_list **stack_a, t_list **stack_b)
{
	swap_a(stack_a, 0);
	swap_b(stack_b, 0);
	ft_printf("ss\n");
}

void	rt_a_rt_b(t_list **stack_a, t_list **stack_b)
{
	rotate_a(stack_a, 0);
	rotate_b(stack_b, 0);
	ft_printf("rr\n");
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	ft_printf("rrr\n");
}
