/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:02:10 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/14 20:40:22 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **a, int min, int p_m)
{
	if ((p_m == (*a)->content && min == (*a)->next->content)
		|| (p_m == (*a)->next->content && min == (*a)->next->next->content)
		|| (min == (*a)->content && p_m == (*a)->next->next->content))
		swap_a(a);
	if (p_m == (*a)->content && min == (*a)->next->next->content)
		rra(a);
	if (min == (*a)->next->content && p_m == (*a)->next->next->content)
		rotate_a(a);
}

void	sort_5(t_list **a, t_list **b, int min, int p_m)
{
	push_b(a, b);
	push_b(a, b);
	min = get_min(a);
	p_m = get_prev_min(a, min);
	sort_3(a, min, p_m);
	push_a(a, b);
	rotate_a(a);
	push_a(a, b);
}

void	instructions(t_list *stack_a, t_list *stack_b, int size)
{
	int	min;
	int	p_min;
	t_list		*current;
	// t_list	*min;
	// t_list	*p_min;

	stack_b = NULL;
	min = get_min(&stack_a);
	p_min = get_prev_min(&stack_a, min);
	if (size == 2)
		swap_a(&stack_a);
	if (size == 3)
		sort_3(&stack_a, min, p_min);
	if (size == 5)
		sort_5(&stack_a, &stack_b, min, p_min);
	current = stack_a;
	while (current != NULL)
	{
		ft_printf("list: %d\n", current->content);
		current = current->next;
	}
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
