/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utile_inst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:35:59 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/19 18:38:38 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_min_index(t_list **stack_a, int size, int i)
{
	t_list	*min;
	t_list	*currant;
	t_list	*init;

	init = *stack_a;
	while (init)
	{
		init->index = -1;
		init = init->next;
	}
	while (i < size)
	{
		min = *stack_a;
		currant = (*stack_a);
		while (min->index != -1)
			min = min->next;
		while (currant != NULL)
		{
			if (min->content > currant->content && currant->index == -1)
				min = currant;
			currant = currant->next;
		}
		min->index = i;
		i++;
	}
}

void	convert_top_b(t_list **stack, t_list	*node)
{
	int	size;

	size = size_of_stack(stack);
	position_node(stack);

	if (node->position > (size / 2))
	{
		while (*stack != node)
			rrb(stack);
	}
	else
	{
		while (*stack != node)
			rotate_b(stack);
	}
}

void	convert_to_top(t_list **stack, t_list	*node)
{
	int	size;

	size = size_of_stack(stack);
	if (node->position > (size / 2))
	{
		while (*stack != node)
			rra(stack);
	}
	else
	{
		while (*stack != node)
			rotate_a(stack);
	}
}

void	position_node(t_list **stack)
{
	t_list	*head;
	int		i;

	i = 0;
	head = *stack;
	while (head)
	{
		head->position = i;
		i++;
		head = head->next;
	}
}
