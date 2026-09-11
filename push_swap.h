/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsimsek <ahsimsek@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 01:43:33 by ahsimsek          #+#    #+#             */
/*   Updated: 2026/09/10 19:05:40 by ahsimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

/* Parser & Validation */
int		check_syntax(char *str);
long	ft_atol(const char *nptr);
int		is_valid_nbr(char *str);
int		check_duplicate(t_stack *a, int n);
int		parse_args(t_stack **a, char **argv);

/* Stack Utilities */
t_stack	*stack_new(int value);
t_stack	*stack_last(t_stack *lst);
void	stack_add_back(t_stack **lst, t_stack *new_node);
int		stack_size(t_stack *lst);
void	free_stack(t_stack **stack);
void	free_matrix(char **str);

/* Operations */
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

/* Indexing & Disorder Metric */
void	assign_index(t_stack *a);
double	compute_disorder(t_stack *a);
int		is_sorted(t_stack *a);

/* Sort Utilities */
t_stack	*find_max_node(t_stack *stack);
t_stack	*find_min_node(t_stack *stack);
int		get_node_pos(t_stack *stack, t_stack *target);
int		get_max_bits(int max_val);

/* Sorting Strategies */
void	sort_three(t_stack **a);
void	sort_five(t_stack **a, t_stack **b);
void	simple_sort(t_stack **a, t_stack **b);
void	medium_sort(t_stack **a, t_stack **b);
void	radix_sort(t_stack **a, t_stack **b);
void	sort_stack(t_stack **a, t_stack **b);

#endif
