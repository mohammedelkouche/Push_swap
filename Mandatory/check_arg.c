/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 11:41:16 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/06 00:08:53 by mel-kouc         ###   ########.fr       */
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

// int	check_is_int(char **arg)
// {
// 	int		i;
// 	char	*max;
// 	char	*min;

// 	max = "2147483647";
// 	min = "-2147483648";
// 	i = 0;
// 	// ft_printf("%c\n", **arg);
// 	if (**arg == '-' && ft_strncmp(*arg, min, 12) > 0)
// 		return (0);
// 	else if (**arg == '+' && ft_strncmp(*(arg + 1), max, 12) > 0)
// 		return (0);
// 	// else if (ft_strncmp(*arg, min, 12) > 0)
// 	// 	return (0);
// 	ft_printf("%s\n", *arg);
// 	return (1);
// }

int	*convert_to_int(int argc, char **arg)
{
	int	i;
	int	*table;
	int	tmp;
	int	len;

	i = -1;
	table = malloc((argc - 1) * sizeof(int));
	if (!table)
	{
		free (table);
		return (0);
	}
	while (arg[++i])
	{
		tmp = ft_atoi(arg[i]);
		len = ft_strlen(arg[i]);
		if ((tmp == -1 && len >= 10) || (tmp == 0 && len >= 11))
		{
			free (table);
			return (0);
		}
		table[i] = tmp;
		// if (!check_is_int(&arg[i]))
		// {
		// 	free (table);
		// 	return (0);
		// }
		ft_printf("%d\n", table[i]);
	}
	return (table);
}
