/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:48:30 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/15 22:01:00 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	hard_sort(t_list **a, t_list **b, t_list *min, t_list *p_min)
{
	t_list	*tmp;
	int		i;
	int		k;
	int		size;

	tmp = *a;
	i = 0;
	size = size_of_stack(t_list **stack);
	*b = NULL;
	min = NULL;
	p_min = NULL;
	while (tmp)
	{
		k = size / 2;
		if (tmp->index <= i)
			push_b(b);
		else if (tmp->index <= i + k)
		{
			push_b(b);
			rotate_b(b);
			i++;
		}
		else
			rotate_a(a);
		size--;
		// tmp = tmp->next;
	}
}
