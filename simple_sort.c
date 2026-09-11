/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsimsek <ahsimsek@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:02:15 by ahsimsek          #+#    #+#             */
/*   Updated: 2026/09/10 18:40:50 by ahsimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple_sort(t_stack **a, t_stack **b)
{
	t_stack	*min_node;
	int		pos;
	int		size;

	while (stack_size(*a) > 3)
	{
		min_node = find_min_node(*a);
		pos = get_node_pos(*a, min_node);
		size = stack_size(*a);
		while (*a != min_node)
		{
			if (pos <= size / 2)
				ra(a);
			else
				rra(a);
		}
		pb(a, b);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}
