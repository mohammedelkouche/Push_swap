/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:02:10 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/16 18:49:46 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **a, t_list *min, t_list *p_m)
{
	if ((p_m->content == (*a)->content && min->content == (*a)->next->content)
		|| (p_m->content == (*a)->next->content
			&& min->content == (*a)->next->next->content)
		|| (min->content == (*a)->content
			&& p_m->content == (*a)->next->next->content))
		swap_a(a);
	if (p_m->content == (*a)->content
		&& min->content == (*a)->next->next->content)
		rra(a);
	if (min->content == (*a)->next->content
		&& p_m->content == (*a)->next->next->content)
		rotate_a(a);
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

void	sort_5(t_list **a, t_list **b, t_list	*min, t_list *p_m)
{
	convert_to_top(a, min);
	push_b(a, b);
	convert_to_top(a, p_m);
	push_b(a, b);
	min = get_min(a);
	p_m = get_prev_min(a, min);
	sort_3(a, min, p_m);
	push_a(a, b);
	push_a(a, b);
}

void	position_node(t_list *stack)
{
	t_list	*head;
	int		i;

	i = 0;
	head = stack;
	while (head)
	{
		head->position = i;
		i++;
		head = head->next;
	}
}

void	instructions(t_list *stack_a, t_list *stack_b, int size)
{
	t_list	*min;
	t_list	*p_min;
	// t_list	*current;

	position_node(stack_a);
	// ft_printf("------------------\n");
	// ft_printf("index of stac_a = %d", index);
	// ft_printf("\n------------------\n");
	min = get_min(&stack_a);
	// ft_printf("%d", stack_a->next->next->index);
	p_min = get_prev_min(&stack_a, min);
	// ft_printf("%d\n", min->index);
	// ft_printf("\n------------------\n");
	if (size == 2)
		swap_a(&stack_a);
	if (size == 3)
		sort_3(&stack_a, min, p_min);
	if (size == 5)
		sort_5(&stack_a, &stack_b, min, p_min);
	hard_sort(&stack_a, &stack_b, min, size);
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
	// ft_printf("------------------\n");
	// rotate_a(&stack_a);
	// rotate_b(&stack_b);
	// rt_a_rt_b(&stack_a, &stack_b);
	// rra(&stack_a);
	// rrb(&stack_b);
	// rrr(&stack_a, &stack_b);
}
