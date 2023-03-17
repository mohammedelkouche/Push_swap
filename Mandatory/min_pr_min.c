/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_pr_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:38:45 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/17 18:47:28 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_min(t_list **stack_a)
{
	t_list	*min;
	t_list	*currant;

	min = *stack_a;
	currant = (*stack_a)->next;
	while (currant != NULL)
	{
		if (min->content > currant->content)
			min = currant;
		currant = currant->next;
	}
	min->index = 0;
	return (min);
}

t_list	*get_prev_min(t_list **stack_a, t_list	*min)
{
	t_list	*prev_min;
	t_list	*currant;

	prev_min = *stack_a;
	currant = (*stack_a)->next;
	if (prev_min->content == min->content)
		prev_min = (*stack_a)->next;
	while (currant != NULL)
	{
		if (prev_min->content > currant->content
			&& currant->content != min->content)
			prev_min = currant;
		currant = currant->next;
	}
	return (prev_min);
}

t_list	*get_max(t_list **stack_a)
{
	t_list	*max;
	t_list	*currant;

	max = *stack_a;
	currant = (*stack_a)->next;
	while (currant != NULL)
	{
		if (max->content < currant->content)
			max = currant;
		currant = currant->next;
	}
	return (max);
}

// int	get_min(t_list **stack_a)
// {
// 	t_list	*min;
// 	t_list	*currant;

// 	min = *stack_a;
// 	currant = (*stack_a)->next;
// 	while (currant != NULL)
// 	{
// 		if (min->content > currant->content)
// 			min = currant;
// 		currant = currant->next;
// 	}
// 	return (min->content);
// }


// int	get_prev_min(t_list **stack_a, int min)
// {
// 	t_list	*prev_min;
// 	t_list	*currant;

// 	prev_min = *stack_a;
// 	currant = (*stack_a)->next;
// 	if (prev_min->content == min)
// 		prev_min = (*stack_a)->next;
// 	while (currant != NULL)
// 	{
// 		if (prev_min->content > currant->content
// 			&& currant->content != min)
// 			prev_min = currant;
// 		currant = currant->next;
// 	}
// 	return (prev_min->content);
// }
