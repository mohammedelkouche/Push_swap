/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:37:32 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/09 23:33:40 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

typdef struct	s_list {
    int				data;
    struct s_list	*next;
}    t_list;

typdef struct	s_stack {
    int				*content;
    int				*head;
    int				size;
}    t_stack;

void	ft_error(void);
int		chek_space(char **av);
int		check_digit(char **arg);
int		*convert_to_int(int nbr, char **arg);
void	free_error(char **divide);


#endif