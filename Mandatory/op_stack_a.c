/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_stack_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:01:53 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/16 14:15:47 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **stack_a)
{
	t_list	*tmp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	ft_printf("sa\n");
}

// Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
// i cut this condition from if ==> (   || (*stack_b)->next == NULL  )
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

//ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.
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
	ft_printf("ra\n");
}

//rra (reverse rotate a): Shift down all elements of stack a by 1.
// The last element becomes the first one.
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
	ft_printf("rra\n");
}
