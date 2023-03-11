/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:37:32 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/11 11:48:26 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

// typdef struct	s_l {
//     int				value;
//     struct s_list	*next;
// }    t_l;

// typdef struct	s_stack {
//     int				*content;
//     int				*head;
//     int				size;
// }    t_stack;

char	*ft_strxjoin(char *data, char *buffer);
void	ft_error(void);
int		chek_space(char **av);
int		check_digit(char **arg);
int		*convert_to_int(int nbr, char **arg);
void	free_error(char **divide);
t_list	*creat_list(int *table, t_list *stack_a, int size);
int		nbr_divide(char **divide);
int		arg_len(char *arg);
int		*parsing_functions(char **av, char *join, int *size);
int		check_is_sort(t_list *stack_a);
void	instructions(t_list *stack_a, t_list *stack_b, int size);


#endif