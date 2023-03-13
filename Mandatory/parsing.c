/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 11:41:16 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/13 14:22:25 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chek_space(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[++i])
	{
		j = 0;
		while (av[i][j] && av[i][j] == 32)
			j++;
		if (av[i][j] == '\0')
			return (0);
	}
	return (1);
}

int	check_digit(char **arg)
{
	int		i;
	int		j;

	i = -1;
	while (arg[++i])
	{
		j = -1;
		while (arg[i][++j])
		{
			if (arg[i][j] == '-' || arg[i][j] == '+')
				j++;
			if (!ft_isdigit(arg[i][j]) || arg[i][j + 1] == '-' ||
			arg[i][j + 1] == '+')
				return (0);
		}
	}
	return (1);
}

int	check_dupl(int	*table, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		tmp = table[i];
		while (j < size)
		{
			if (tmp == table[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	*convert_to_int(int size, char **arg)
{
	int	i;
	int	*table;
	int	tmp;
	int	len;

	i = 0;
	table = malloc(size * sizeof(int));
	if (!table)
		return (NULL);
	while (arg[i])
	{
		len = arg_len(arg[i]);
		tmp = ft_atoi(arg[i]);
		if (len > 11 || (len == 11 && *arg[i] == '-' && tmp > 0)
			|| (len == 10 && *arg[i] != '-' && tmp < 0)
			|| (len == 11 && *arg[i] != '-'))
			return (free(table), NULL);
		table[i] = tmp;
		i++;
	}
	if (!check_dupl(table, i))
		return (free(table), NULL);
	return (table);
}

int	*parsing_functions(char **av, char *join, int *size)
{
	int			i;
	int			*intarray;
	char		**divide;

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
	*size = nbr_divide(divide);
	if (!check_digit(divide))
		free_error(divide);
	intarray = convert_to_int(*size, divide);
	if (!intarray)
		free_error(divide);
	return (intarray);
}
