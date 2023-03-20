/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:49:07 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/20 23:49:08 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap_bonus.h"

// void tst()
// {
// 	system("leaks push_swap");
// }
int	main(int argc, char **argv)
{
	int			*intarray;
	int			size;
	char		*join;
	t_list		*stack_a;
	t_list		*stack_b;

	// atexit(tst);
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
