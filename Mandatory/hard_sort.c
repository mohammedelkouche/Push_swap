/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:48:30 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/16 19:46:56 by mel-kouc         ###   ########.fr       */
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
		init->index = -100;
		init = init->next;
	}
	min = *stack_a;
	while (i < size)
	{
		currant = (*stack_a);
		while (currant != NULL)
		{
			if (min->content > currant->content && currant->index == -100)
				min = currant;
			currant = currant->next;
		}
		min->index = i;
		i++;
		ft_printf("m cont = %d \t m index %d\n", min->content, min->index);
	}
	// return (min);
}

void	hard_sort(t_list **a, t_list **b, t_list *min, int size)
{
	t_list	*tmp;
	int		i;
	// int		j;
	// int		k;

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
		// tmp = tmp->next;
	// }
}
