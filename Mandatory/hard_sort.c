/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:48:30 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/18 23:53:28 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_min_index(t_list **stack_a, int size, int i)
{
	t_list	*min;
	t_list	*currant;
	t_list	*init;

	init = *stack_a;
	while (init)
	{
		init->index = -1;
		init = init->next;
	}
	while (i < size)
	{
		min = *stack_a;
		currant = (*stack_a);
		while (min->index != -1)
			min = min->next;
		while (currant != NULL)
		{
			if (min->content > currant->content && currant->index == -1)
				min = currant;
			currant = currant->next;
		}
		min->index = i;
		// ft_printf("min cont = %d \t min index = %d\n", min->content, min->index);
		i++;
	}
}

// void	fill_stack_b(t_list **a, t_list **b, t_list *tmp, int size, )
// {
// 	int		i;
// 	int		k;

// 	i = 0;
// }

void	stack_a_sorted(t_list **a, t_list **b)
{
	// t_list	*tmp;
	t_list	*max;
	int		size; 

	// tmp = *b;
	// max = NULL;
	// tmp = position_node(a);
	size = size_of_stack(b);
	while (size > 0)
	{
		max = get_max(b);
		// if((*b)->content == max->content)
		// {
		// }else
			convert_top_b(b, max);
			push_a(a, b);
			size--;
	}
	// ft_printf("\n-----stack_b------\n");
	// t_list	*test_b = *b;
	// while (test_b != NULL)
	// {
	// 	ft_printf("list: %d\n", test_b->content);
	// 	test_b = test_b->next;
	// }
	// ft_printf("\n-----stack_b------\n");
		// ft_printf("hello\n");
	return ;
}

void	hard_sort(t_list **a, t_list **b, t_list *min, int size)
{
	t_list	*tmp;
	// t_list	*max;
	int		i;
	int	j;
	int		k;

	tmp = *a;
	i = 0;
	// *b = NULL;

	// t_list	*current = *a;
	min = NULL;
	get_min_index(a, size, i);
	// t_list	*current = *a;
	// ft_printf("\n-----index stack_a------\n");
	// while (current != NULL)
	// {
	// 	ft_printf("content = %d \t index = %d\n" ,current->content, current->index);
	// 	current = current->next;
	// }
	// ft_printf("\n-----index stack_a------\n");
	// if (size < 100)
	// 	j = 2;
	// else if (size >= 100)
	// 	j = 4;
	// else if (size >= 400)
		j = 8;
	// j = 8;
	while (tmp)
	{
		k = (size / j);
		if (tmp->index <= i)
		{
			tmp = tmp->next;
			push_b(a, b);
			i++;
			size--;
		}
		else if (tmp->index <= i + k)
		{
			tmp = tmp->next;
			push_b(a, b);
			rotate_b(b);
			i++;
			size--;
		}
		else
		{
			tmp = tmp->next;
			rotate_a(a);
		}
	}
	// t_list	*current = *a;
	// ft_printf("\n-----stack_a------\n");
	// while (current != NULL)
	// {
	// 	ft_printf("list: %d\n", current->content);
	// 	current = current->next;
	// }


	// ft_printf("\n-----stack_b------\n");
	// t_list	*test_b = *b;
	// while (test_b != NULL)
	// {
	// 	ft_printf("list: %d\n", test_b->content);
	// 	test_b = test_b->next;
	// }
	// ft_printf("\n-----stack_b------\n");
		// ft_printf("hello\n");
	stack_a_sorted(a, b);
	// ft_printf("\n-----stack_a------\n");
	// t_list	*cur = *a;
	// // while (cur != NULL)
	// // {
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// 	cur = cur->next;
	// 	ft_printf("list: %d\n", cur->content);
	// // }
	// ft_printf("\n-----stack_a------\n");
}
