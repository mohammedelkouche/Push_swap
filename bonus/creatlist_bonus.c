/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creatlist_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:48:26 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/21 18:07:01 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_list	**creat_list(int *table, t_list **stack_a, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_lstadd_back(stack_a, ft_lstnew(table[i]));
		i++;
	}
	return (stack_a);
}
