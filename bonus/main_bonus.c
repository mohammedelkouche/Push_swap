/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:49:07 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/23 00:12:50 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	used_function(char **argv, t_list **stack_a)
{
	int			*intarray;
	int			size;
	char		*join;

	join = NULL;
	intarray = parsing_functions(argv, join, &size);
	stack_a = creat_list(intarray, stack_a, size);
	free(intarray);
}

int	main(int argc, char **argv)
{
	char		*str;
	t_list		*stack_a;
	t_list		*stack_b;

	if (argc > 1)
	{
		used_function(argv, &stack_a);
		str = get_next_line(0);
		while (str)
		{
			compare_op(&stack_a, &stack_b, str);
			free(str);
			str = get_next_line(0);
		}
		if (check_is_sort(stack_a) && stack_b == NULL)
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
		free_list(stack_a);
	}
	else
		ft_error();
	return (0);
}
//  0x7fa387402b80
