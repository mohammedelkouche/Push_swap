/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_stack_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:06:04 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/13 19:29:23 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_list **stack_b)
{
	int	tmp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tmp = (*stack_b)->content;
	(*stack_b)->content = (*stack_b)->next->content;
	(*stack_b)->next->content = tmp;
    ft_printf("sb\n");
}

//Take the first element at the top of a and put it at the top of b.
//Do nothing if a is empty.
void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack_tmp;
	// t_list	*current;


	if (*stack_a == NULL || (*stack_a)->next == NULL)
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
	// current = *stack_b;
	// while (current != NULL)
	// {
	// 	ft_printf("list: %d\n", current->content);
	// 	current = current->next;
	// }
    ft_printf("pb\n");
}

// b (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.
void	rotate_b(t_list **stack_b)
{
	t_list	*head;
	t_list	*last;
	// t_list	*current;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	head = *stack_b;
	last = ft_lstlast(*stack_b);
	*stack_b = (*stack_b)->next;
	head->next = NULL;
	last->next = head;
	// current = *stack_b;
	// while (current != NULL)
	// {
	// 	ft_printf("list: %d\n", current->content);
	// 	current = current->next;
	// }
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
