/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsimsek <ahsimsek@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 01:43:33 by ahsimsek          #+#    #+#             */
/*   Updated: 2026/09/03 04:46:56 by ahsimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

int		check_syntax(char *str);
long	ft_atol(const char *nptr);
int		is_valid_nbr(char *str);
int		parse_args(t_stack **a, char **argv);
int		check_duplicate(t_stack *a, int n);
t_stack	*stack_new(int value);
t_stack	*stack_last(t_stack *lst);
void	stack_add_back(t_stack **lst, t_stack *new_stack);
void	free_stack(t_stack **stack);
void	free_matrix(char **str);
#endif
