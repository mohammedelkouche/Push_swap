/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_stack_a_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:49:49 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/20 23:49:52 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap_a(t_list **stack_a,int flag)
{
	t_list	*tmp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	if (flag == 1)
		ft_printf("sa\n");
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
	ft_printf("pa\n");
}

void	rotate_a(t_list **stack_a, int flag)
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
	if (flag == 1)
		ft_printf("ra\n");
}

void	rra(t_list **stack_a, int flag)
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
	if (flag == 1)
		ft_printf("rra\n");
}
