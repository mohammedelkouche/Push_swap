/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:02:10 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/12 22:06:02 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **stack_a)
{
	int	tmp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp = (*stack_a)->content;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->next->content = tmp;
}

void	swap_b(t_list **stack_b)
{
	int	tmp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tmp = (*stack_b)->content;
	(*stack_b)->content = (*stack_b)->next->content;
	(*stack_b)->next->content = tmp;
}

void	s_a_s_b(t_list **stack_a, t_list **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
}

// Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
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

//Take the first element at the top of a and put it at the top of b.
//Do nothing if a is empty.
void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack_tmp;

	if (*stack_a == NULL)
		return ;
	stack_tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	stack_tmp->next = NULL;
	if (*stack_b == NULL)
	{
		*stack_b = stack_tmp;
		// ft_printf("list b: %d\n", (*stack_b)->content);
	}
	else
	{
		stack_tmp->next = *stack_b;
		*stack_b = stack_tmp;
	}
}

//ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.
void	rotate_a(t_list **stack_a)
{
	t_list	*head;
	t_list	*last;
	t_list		*current;


	head = *stack_a;
	last = ft_lstlast(*stack_a);
	// ft_printf("list: %d\n", last->content);
	*stack_a = (*stack_a)->next;
	head->next = NULL;
	last->next = head;
	current = *stack_a;
	while (current != NULL)
	{
		ft_printf("list: %d\n", current->content);
		current = current->next;
	}
}

void	instructions(t_list *stack_a, t_list *stack_b, int size)
{
	// t_list		*current;

	size = 0;
	stack_b = NULL;
	// swap_a(&stack_a);
	// current = stack_a;
	// while (current != NULL)
	// {
	// 	ft_printf("list: %d\n", current->content);
	// 	current = current->next;
	// }
	// swap_b(&stack_b);
	// s_a_s_b(&stack_a, &stack_b);
	// push_a(&stack_a, &stack_b);
	// push_b(&stack_a, &stack_b);
	rotate_a(&stack_a);
}
