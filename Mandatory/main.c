/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:27:49 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/05 21:30:10 by mel-kouc         ###   ########.fr       */
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

void	used_functions(int argc, char **av)
{
	int			i;
	static char	*join;
	char		**arg;
	int			*intarray;

	i = 0;
	if (!chek_space(av))
		ft_error();
	if (!join)
		join = ft_strdup("");
	while (av[++i])
	{
		join = ft_strxjoin(join, av[i]);
		join = ft_strxjoin(join, " ");
	}
	arg = ft_split(join, ' ');
	if (!check_digit(arg))
	{
		ft_error();
		// free arg
	}
	intarray = convert_to_int(argc, arg);
	// int j = -1;
	// while (intarray[++j])
	// {
	// 	ft_printf("%d\n", intarray[j]);
	// }
	
	// if (!check_is_int(arg))
	// {
	// 	ft_error();
	// 	// free arg
	// }
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		used_functions(argc, argv);
	else
		ft_error();
	return (0);
}
