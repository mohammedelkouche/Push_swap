/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:59:01 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/09 16:40:59 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit (1);
}

void	free_error(char **divide)
{
	int	i;

	i = 0;
	while (divide[i])
	{
		free(divide[i]);
		i++;
	}
	free(divide);
	ft_error();
}
