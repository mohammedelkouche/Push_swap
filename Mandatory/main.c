/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:27:49 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/08 19:06:03 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

char	*ft_strxjoin(char *data, char *buffer)
{
	char	*new_data;
	size_t	s1;
	size_t	s2;

	s1 = ft_strlen(data);
	s2 = ft_strlen(buffer);
	new_data = malloc((s1 + s2 + 1) * sizeof(char));
	if (!new_data)
		return (NULL);
	ft_strlcpy(new_data, data, s1 + 1);
	ft_strlcpy(new_data + s1, buffer, s2 + 1);
	free(data);
	return (new_data);
}

int	*parsing_functions(int argc, char **av)
{
	int			i;
	int			*intarray;
	char		**divide;
	static char	*join;

	i = 0;
	divide = NULL;
	if (!chek_space(av))
		ft_error();
	if (!join)
		join = ft_strdup("");
	while (av[++i])
	{
		join = ft_strxjoin(join, av[i]);
		join = ft_strxjoin(join, " ");
	}
	divide = ft_split(join, ' ');
	if (!check_digit(divide))
		free_error(divide);
	intarray = convert_to_int(argc, divide);
	if (!intarray)
		free_error(divide);
	return (intarray);
}

// void tst()
// {
// 	system("leaks push_swap");
// }
int	main(int argc, char **argv)
{
	int	*intarray;

	// atexit(tst);
	if (argc > 1)
	{
		intarray = parsing_functions(argc, argv);
		// instructions(intarray);
	}
	else
		ft_error();
	return (0);
}
