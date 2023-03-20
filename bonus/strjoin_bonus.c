/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:50:16 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/20 23:50:18 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
