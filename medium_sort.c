/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   medium_sort.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 13:27:45 by username         #+#    #+#              */
/*   Updated: 2026/09/09 13:34:20 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	chunk_size(int size)
{
	int	k;

	k = 1;
	while ((k + 1) * (k + 1) <= size)
		k++;
	return (size / k);
}

void	medium_sort(t_stack **stack_a, t_stack **stack_b, t_count *count)
{
	int		pushed;
	int		chunk;
	t_stack	*max_node;
	t_stack	*tmp;
	int		pos;
	int		size;

	pushed = 0;
	chunk = chunk_size(ft_lstsize(*stack_a));
	while (*stack_a)
	{
		if ((*stack_a)->index <= pushed)
		{
			pb(stack_a, stack_b, count);
			rb(stack_b, count);
			pushed++;
		}
		else if ((*stack_a)->index <= pushed + chunk)
		{
			pb(stack_a, stack_b, count);
			pushed++;
		}
		else
			ra(stack_a, count);
	}
	while (*stack_b)
	{
		max_node = find_max(*stack_b);
		size = ft_lstsize(*stack_b);
		pos = 0;
		tmp = *stack_b;
		while (tmp && tmp != max_node)
		{
			pos++;
			tmp = tmp->next;
		}
		while (*stack_b != max_node)
		{
			if (pos <= size / 2)
				rb(stack_b, count);
			else
				rrb(stack_b, count);
		}
		pa(stack_a, stack_b, count);
	}
}
