/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_len_arg_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:49:22 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/21 23:57:18 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	nbr_divide(char **divide)
{
	int	i;

	i = 0;
	while (divide[i])
		i++;
	return (i);
}

int	size_of_stack(t_list **stack)
{
	int		size;
	t_list	*head;

	size = 0;
	head = *stack;
	while (head != NULL)
	{
		size++;
		head = (head)->next;
	}
	return (size);
}
