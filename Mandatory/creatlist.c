/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creatlist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:38:53 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/10 17:39:48 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*creat_list(int *table, t_list *stack_a, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(table[i]));
		i++;
	}
	return (stack_a);
}
