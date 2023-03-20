/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_stack_b_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:49:58 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/20 23:50:00 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap_b(t_list **stack_b, int flag)
{
	t_list	*tmp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	if (flag == 1)
		ft_printf("sb\n");
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack_tmp;

	if (*stack_a == NULL )
		return ;
	stack_tmp = *stack_a;
	*stack_a = (*stack_a)->next;
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

void	rotate_b(t_list **stack_b, int flag)
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
	if (flag == 1)
		ft_printf("rb\n");
}

void	rrb(t_list **stack_b, int flag)
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
	if (flag == 1)
		ft_printf("rrb\n");
}
