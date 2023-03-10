/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:08:40 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/10 21:56:30 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_is_sort(t_list *stack_a)
{
    while (stack_a->next != NULL)
    {
        if (stack_a->content > stack_a->next->content)
            return (0);
        stack_a = stack_a->next;
    }
    return (1);
}
