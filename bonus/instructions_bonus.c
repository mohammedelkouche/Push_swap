/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:48:58 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/20 23:49:01 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	instructions(t_list **stack_a, t_list **stack_b)
{
	t_list	*min;
	t_list	*p_min;
	int		size;
	int		j;

	j = 0;
	size = size_of_stack(stack_a);
	position_node(stack_a);
	min = get_min(stack_a);
	p_min = get_prev_min(stack_a, min);
	if (size <= 5)
	{
		simple_sort(stack_a, stack_b, min, p_min);
		return ;
	}
	else
	{
		get_min_index(stack_a, size, j);
		j = 0;
		j = check_divisor(size);
		fill_stack_b(stack_a, stack_b, size, j);
		stack_a_sorted(stack_a, stack_b);
		return ;
	}
}
