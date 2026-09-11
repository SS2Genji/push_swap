/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsimsek <ahsimsek@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:27:45 by ahsimsek          #+#    #+#             */
/*   Updated: 2026/09/10 18:50:22 by ahsimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_chunk_size(int size)
{
	if (size <= 20)
		return (4);
	if (size <= 100)
		return (15);
	return (32);
}

static void	push_chunks_to_b(t_stack **a, t_stack **b, int chunk)
{
	int	pushed;

	pushed = 0;
	while (*a)
	{
		if ((*a)->index <= pushed)
		{
			pb(a, b);
			rb(b);
			pushed++;
		}
		else if ((*a)->index <= pushed + chunk)
		{
			pb(a, b);
			pushed++;
		}
		else
			ra(a);
	}
}

static void	push_back_to_a(t_stack **a, t_stack **b)
{
	t_stack	*max_node;
	int		pos;
	int		size;

	while (*b)
	{
		max_node = find_max_node(*b);
		size = stack_size(*b);
		pos = get_node_pos(*b, max_node);
		while (*b != max_node)
		{
			if (pos <= size / 2)
				rb(b);
			else
				rrb(b);
		}
		pa(a, b);
	}
}

void	medium_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	chunk;

	chunk = get_chunk_size(stack_size(*stack_a));
	push_chunks_to_b(stack_a, stack_b, chunk);
	push_back_to_a(stack_a, stack_b);
}
