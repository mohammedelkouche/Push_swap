/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:02:10 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/11 23:38:10 by mel-kouc         ###   ########.fr       */
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
// void	push_a(t_list **stack_a, t_list **stack_b)
// {
// 	if (*stack_b == NULL)
// 		return ;
	// *stack_b
// }
//Take the first element at the top of a and put it at the top of b.
//Do nothing if a is empty.
void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack_tmp;

	stack_tmp = NULL;
	if (*stack_a == NULL)
		return ;
	if (*stack_b == NULL)
	{
		stack_tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		stack_tmp->next = NULL;
		*stack_b = (stack_tmp);
		ft_printf("list: %d\n", (*stack_b)->content);
	}
}

void	instructions(t_list *stack_a, t_list *stack_b, int size)
{
	// t_list		*current;

	size = 0;
	swap_a(&stack_a);
	// current = stack_a;
	// while (current != NULL)
	// {
	// 	ft_printf("list: %d\n", current->content);
	// 	current = current->next;
	// }
	swap_b(&stack_b);
	s_a_s_b(&stack_a, &stack_b);
	// push_a(&stack_a, &stack_b);
	push_b(&stack_a, &stack_b);
}
