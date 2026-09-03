/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsimsek <ahsimsek@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 05:27:18 by ahsimsek          #+#    #+#             */
/*   Updated: 2026/09/03 05:54:18 by ahsimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void push (t_stack **dest, t_stack **src)
{
	t_stack *top_src;

	if (!src || !*src)
		return ;
	top_src = *src;
	*src = (*src)->next;
	top_src->next = *dest;
	*dest = top_src;
}

void pa(t_stack **a, t_stack **b)
{
	push(a,b);
	ft_putstr_fd("pa\n",1);
}

void pb(t_stack **a, t_stack **b)
{
	push(b,a);
	ft_putstr_fd("pb\n",1);
}
