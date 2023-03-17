/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:27:49 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/17 16:37:19 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void tst()
// {
// 	system("leaks push_swap");
// }
int	main(int argc, char **argv)
{
	int			*intarray;
	int			size;
	static char	*join;
	t_list		*stack_a;
	t_list		*stack_b;
	// t_list		*current;

	// atexit(tst);
	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		intarray = parsing_functions(argv, join, &size);
		stack_a = creat_list(intarray, stack_a, size);
		if (!check_is_sort(stack_a))
			instructions(&stack_a, &stack_b);
		// current = stack_a;
		// while (current != NULL)
		// {
		// 	ft_printf("list: %d\n", current->content);
		// 	current = current->next;
		// }
		// instructions(intarray);
	}
	else
		ft_error();
	return (0);
}
