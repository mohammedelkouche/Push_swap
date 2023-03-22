/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_stack_a_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:49:49 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/21 18:59:04 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap_a(t_list **stack_a)
{
	t_list	*tmp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
}

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack_tmp;

	if (*stack_b == NULL)
		return ;
	stack_tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	stack_tmp->next = NULL;
	if (*stack_a == NULL)
		*stack_a = stack_tmp;
	else
	{
		stack_tmp->next = *stack_a;
		*stack_a = stack_tmp;
	}
}

void	rotate_a(t_list **stack_a)
{
	t_list	*head;
	t_list	*last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	head = *stack_a;
	last = ft_lstlast(*stack_a);
	*stack_a = (*stack_a)->next;
	head->next = NULL;
	last->next = head;
}

void	rra(t_list **stack_a)
{
	t_list	*head;
	t_list	*last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	last = *stack_a;
	head = ft_lstlast(*stack_a);
	while (last->next->next)
		last = last->next;
	last->next = NULL;
	ft_lstadd_front(stack_a, head);
}
