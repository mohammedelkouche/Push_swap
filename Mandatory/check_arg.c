/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 11:41:16 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/09 18:00:33 by mel-kouc         ###   ########.fr       */
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

int	arg_len(char *arg)
{
	int	len;

	len = 0;
	while (*arg == '0')
		arg++;
	while (*arg)
	{
		arg++;
		len++;
	}
	return (len);
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

int	*convert_to_int(int nbr, char **arg)
{
	int	i;
	int	*table;
	int	tmp;
	int	len;

	i = 0;
	table = malloc(nbr * sizeof(int));
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

