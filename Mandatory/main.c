/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:27:49 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/06 22:48:50 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	used_functions(int argc, char **av, char **divide, char *join)
{
	int			i;
	int			*intarray;

	i = 0;
	if (!chek_space(av))
		ft_error();
	while (av[++i])
	{
		join = ft_strxjoin(join, av[i]);
		join = ft_strxjoin(join, " ");
	}
	divide = ft_split(join, ' ');
	if (!check_digit(divide))
	{
		free_divide(divide);
		ft_error();
	}
	intarray = convert_to_int(argc, divide);
	if (!intarray)
	{
		free_divide(divide);
		ft_error();
	}
	//
}

int	main(int argc, char **argv)
{
	static char	*join;
	char		**divide;

	if (argc > 1)
	{
		divide = NULL;
		if (!join)
		join = ft_strdup("");
		used_functions(argc, argv, divide, join);
	}
	else
		ft_error();
	return (0);
}
