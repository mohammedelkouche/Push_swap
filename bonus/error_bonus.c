/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:48:42 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/21 13:22:04 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

void	free_divide(char **divide)
{
	int	i;

	i = 0;
	while (divide[i])
	{
		free(divide[i]);
		i++;
	}
	free(divide);
}

void	free_list(t_list *a)
{
	t_list	*tmp;
	t_list	*next;

	tmp = a;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	exit(1);
}
