/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:05:00 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/17 11:43:46 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **a, t_list *min, t_list *p_m)
{
	if ((p_m->content == (*a)->content && min->content == (*a)->next->content)
		|| (p_m->content == (*a)->next->content
			&& min->content == (*a)->next->next->content)
		|| (min->content == (*a)->content
			&& p_m->content == (*a)->next->next->content))
		swap_a(a);
	if (p_m->content == (*a)->content
		&& min->content == (*a)->next->next->content)
		rra(a);
	if (min->content == (*a)->next->content
		&& p_m->content == (*a)->next->next->content)
		rotate_a(a);
}

void	sort_4(t_list **a, t_list **b, t_list *min, t_list *p_min)
{
	convert_to_top(a, min);
	push_b(a, b);
	min = get_min(a);
	p_min = get_prev_min(a, min);
	sort_3(a, min, p_min);
	push_a(a, b);
}

void	sort_5(t_list **a, t_list **b, t_list	*min, t_list *p_m)
{
	convert_to_top(a, min);
	push_b(a, b);
	convert_to_top(a, p_m);
	push_b(a, b);
	min = get_min(a);
	p_m = get_prev_min(a, min);
	sort_3(a, min, p_m);
	push_a(a, b);
	push_a(a, b);
}

void	simple_sort(t_list **a, t_list **b, t_list *min, t_list *p_min)
{
	int	size;

	size = size_of_stack(a);
	if (size == 2)
	{
		swap_a(a);
		return ;
	}	
	if (size == 3)
	{
		sort_3(a, min, p_min);
		return ;
	}
	if (size == 4)
	{
		sort_4(a, b, min, p_min);
		return ;
	}
	if (size == 5)
	{
		sort_5(a, b, min, p_min);
		return ;
	}
}
