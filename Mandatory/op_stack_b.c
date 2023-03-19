/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_stack_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:06:04 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/19 19:11:22 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	ft_printf("sb\n");
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack_tmp;

	stack_tmp = *stack_a;
	if (size_of_stack(stack_a) > 1)
		*stack_a = (*stack_a)->next;
	if (*stack_a == NULL )
		return ;
	stack_tmp->next = NULL;
	if (*stack_b == NULL)
		*stack_b = stack_tmp;
	else
	{
		stack_tmp->next = *stack_b;
		*stack_b = stack_tmp;
	}
	ft_printf("pb\n");
}

void	rotate_b(t_list **stack_b)
{
	t_list	*head;
	t_list	*last;
	t_list	*current;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	head = *stack_b;
	last = ft_lstlast(*stack_b);
	*stack_b = (*stack_b)->next;
	head->next = NULL;
	last->next = head;
	current = *stack_b;
	ft_printf("rb\n");
}

void	rrb(t_list **stack_b)
{
	t_list	*head;
	t_list	*last;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	last = *stack_b;
	head = ft_lstlast(*stack_b);
	while (last->next->next)
		last = last->next;
	last->next = NULL;
	ft_lstadd_front(stack_b, head);
	ft_printf("rrb\n");
}
