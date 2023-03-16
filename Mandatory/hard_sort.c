/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:48:30 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/16 23:20:48 by mel-kouc         ###   ########.fr       */
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
		// ft_printf("min cont = %d \t min index = %d\n", min->content, min->index);
		i++;
	}
}

void	hard_sort(t_list **a, t_list **b, t_list *min, int size)
{
	// t_list	*tmp;
	int		i;
	int		j;
	int		k;

	tmp = *a;
	i = 0;
	// size = size_of_stack(t_list **stack);
	*b = NULL;
	min = NULL;
	get_min_index(a, size, i);
	// while (tmp)
	// {
	// 	k = size / 2;
	// 	if (tmp->index <= i)
	// 		push_b(b);
	// 	else if (tmp->index <= i + k)
	// 	{
	// 		push_b(b);
	// 		rotate_b(b);
	// 		i++;
	// 	}
	// 	else
	// 		rotate_a(a);
	// 	size--;
	// 	tmp = tmp->next;
	// }
}
