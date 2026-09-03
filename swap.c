/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsimsek <ahsimsek@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 05:20:41 by ahsimsek          #+#    #+#             */
/*   Updated: 2026/09/03 05:26:44 by ahsimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void swap(t_stack **stack)
{
	t_stack *first;
	t_stack *second;
	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void sa(t_stack **a)
{
	swap(a);
	ft_putstr_fd("sa/n",1);
}

void	sb(t_stack **b)
{
	swap(b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_putstr_fd("ss\n", 1);
}
