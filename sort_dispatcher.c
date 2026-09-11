/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_dispatcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsimsek <ahsimsek@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:15:20 by ahsimsek          #+#    #+#             */
/*   Updated: 2026/09/10 19:10:05 by ahsimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack **a, t_stack **b)
{
	int		size;
	double	disorder;

	if (!a || !*a || is_sorted(*a))
		return ;
	size = stack_size(*a);
	if (size == 2)
	{
		if ((*a)->value > (*a)->next->value)
			sa(a);
		return ;
	}
	if (size == 3)
		return (sort_three(a));
	if (size <= 5)
		return (sort_five(a, b));
	disorder = compute_disorder(*a);
	if (disorder < 0.2)
		simple_sort(a, b);
	else if (disorder < 0.5)
		medium_sort(a, b);
	else
		medium_sort(a, b);
}
