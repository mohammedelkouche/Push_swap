/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_len_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:46:10 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/13 12:59:05 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nbr_divide(char **divide)
{
	int	i;

	i = 0;
	while (divide[i])
		i++;
	return (i);
}

int	arg_len(char *arg)
{
	int	len;

	len = 0;
	while (*arg == '0' || (*arg == '-' && *(arg + 1) == '0')
		|| (*arg == '+' && *(arg + 1) == '0'))
		arg++;
	while (*arg)
	{
		arg++;
		len++;
	}
	return (len);
}
