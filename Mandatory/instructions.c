/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:02:10 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/18 22:41:27 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	convert_top_b(t_list **stack, t_list	*node)
{
	int	size;

	size = size_of_stack(stack);
	// 	ft_printf("\n----------------------\n");
	// ft_printf("size ====%d\n",size);
	// ft_printf("node postion ====%d\n",node->position);
	// 	ft_printf("\n-----stack_b------\n");
	// t_list	*test_b = *stack;
	// while (test_b != NULL)
	// {
	// 	ft_printf("list: %d\n", test_b->content);
	// 	test_b = test_b->next;
	// }
	position_node(stack);

	if (node->position > (size / 2))
	{
		while (*stack != node)
			rrb(stack);
		// while (*stack != node)
		// 	rotate_b(stack);
	}
	else if(node->position <= (size / 2))
	{
		while (*stack != node)
			rotate_b(stack);
		// while (*stack != node)
		// 	rrb(stack);
	}
}

void	convert_to_top(t_list **stack, t_list	*node)
{
	int	size;

	size = size_of_stack(stack);
	if (node->position > (size / 2))
	{
		while (*stack != node)
			rra(stack);
	}
	else
	{
		while (*stack != node)
			rotate_a(stack);
	}
}

void	position_node(t_list **stack)
{
	t_list	*head;
	int		i;

	i = 0;
	head = *stack;
	while (head)
	{
		head->position = i;
		i++;
		head = head->next;
	}
}

void	instructions(t_list **stack_a, t_list **stack_b)
{
	t_list	*min;
	t_list	*p_min;
	int		size;
	// t_list	*current;

	size = size_of_stack(stack_a);
	position_node(stack_a);
	min = get_min(stack_a);
	p_min = get_prev_min(stack_a, min);
	if (size <= 5)
		simple_sort(stack_a, stack_b, min, p_min);
	else
		hard_sort(stack_a, stack_b, min, size);
	// push_b(stack_a,stack_b);
	// current = *stack_a;
	// while (current != NULL)
	// {
	// 	ft_printf("list: %d\n", current->content);
	// 	current = current->next;
	// }
	// current = *stack_b;
	// ft_printf("------- stack_b ----------\n");
	// while (current != NULL)
	// {
	// 	ft_printf("list: %d\n", current->content);
	// 	current = current->next;
	// }
	// swap_b(&stack_b);
	// s_a_s_b(&stack_a, &stack_b);
	// push_a(&stack_a, &stack_b);
	// push_b(&stack_a, &stack_b);
	// ft_printf("------------------\n");
	// rotate_a(&stack_a);
	// rotate_b(&stack_b);
	// rt_a_rt_b(&stack_a, &stack_b);
	// rra(&stack_a);
	// rrb(&stack_b);
	// rrr(&stack_a, &stack_b);
}
