/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:48:30 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/19 18:37:00 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_divisor(int size)
{
	int	j;

	j = 0;
	if (size < 100)
		j = 2;
	else if (size < 400)
		j = 4;
	else
		j = 8;
	return (j);
}

void	stack_a_sorted(t_list **a, t_list **b)
{
	t_list	*max;
	int		size;

	size = size_of_stack(b);
	while (size > 0)
	{
		max = get_max(b);
		convert_top_b(b, max);
		push_a(a, b);
		size--;
	}
	return ;
}

void	rt_stack_a(t_list	**tmp, t_list **a)
{
	*tmp = (*tmp)->next;
	rotate_a(a);
}

void	pb_rt_stack_b(t_list **a, t_list **b, t_list **tmp)
{
	*tmp = (*tmp)->next;
	push_b(a, b);
	rotate_b(b);
}

void	fill_stack_b(t_list **a, t_list **b, int size, int j)
{
	t_list	*tmp;
	int		i;
	int		k;

	tmp = *a;
	i = 0;
	while (tmp)
	{
		k = (size / j);
		if (tmp->index <= i || tmp->index <= i + k)
		{
			if (tmp->index <= i)
			{
				tmp = tmp->next;
				push_b(a, b);
			}
			else if (tmp->index <= i + k)
				pb_rt_stack_b(a, b, &tmp);
			i++;
			size--;
		}
		else
			rt_stack_a(&tmp, a);
	}
}

// ft_printf("\n-----stack_a------\n");
	// t_list	*cur = *a;
	// // while (cur != NULL)
	// // {
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// // }
	// ft_printf("\n-----stack_a------\n");
