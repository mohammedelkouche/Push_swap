/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:27:49 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/04 00:37:27 by mel-kouc         ###   ########.fr       */
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

int	check_arg(char **arg)
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
	ft_printf("hello");
	return (1);
}

int	chek_space(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[++i])
	{
		j = 0;
		if (*av)
			return (0);
		while ((av[i][j] != '\0' && av[i][j] >= 9 && av[i][i] <= 13) || av[i][j] == 32)
			j++;
		if (av[i][j] == '\0')
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int			i;
	static char	*join;
	char		**arg;

	i = 0;
	if (argc > 1)
	{
		if (!chek_space(argv))
		{
			ft_printf("existance of Whitespace argument");
			exit (1);
		}
		if (!join)
			join = ft_strdup("");
		while (argv[++i])
		{
			join = ft_strxjoin(join, argv[i]);
			join = ft_strxjoin(join, " ");
		}
		arg = ft_split(join, ' ');
		// int j = -1;
		// while (arg[++j])
		// 	ft_printf("%s\n", arg[j]);
		check_arg(arg);
	}
	else
		ft_printf("messing argument");
	return (0);
}
