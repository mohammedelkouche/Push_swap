/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:27:49 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/22 01:54:51 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			*intarray;
	int			size;
	char		*join;
	t_list		*stack_a;
	t_list		*stack_b;

	join = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		intarray = parsing_functions(argv, join, &size);
		stack_a = creat_list(intarray, stack_a, size);
		free(intarray);
		if (!check_is_sort(stack_a))
			instructions(&stack_a, &stack_b);
		free_list(stack_a);
	}
	else
		ft_error();
	return (0);
}
//  0x7fa387402b80
