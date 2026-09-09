/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   radix_sort.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 13:09:20 by username         #+#    #+#              */
/*   Updated: 2026/09/09 13:09:27 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_bit(int index, int bit)
{
	return ((index >> bit) & 1);
}

static void	split_a(t_stack **a, t_stack **b, int bit, t_count *count)
{
	int	size;
	int	j;

	size = ft_lstsize(*a);
	j = 0;
	while (j < size)
	{
		if (get_bit((*a)->index, bit))
			ra(a, count);
		else
			pb(a, b, count);
		j++;
	}
}

static void	empty_b(t_stack **a, t_stack **b, t_count *count)
{
	while (*b)
		pa(a, b, count);
}

void	radix_sort(t_stack **a, t_stack **b, t_count *count)
{
	int	max_bits;
	int	i;

	if (!a || !*a || is_sorted(*a))
		return ;
	max_bits = get_max_bits(ft_lstsize(*a) - 1);
	i = 0;
	while (i < max_bits)
	{
		split_a(a, b, i, count);
		empty_b(a, b, count);
		i++;
	}
}
