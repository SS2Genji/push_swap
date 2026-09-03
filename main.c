/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsimsek <ahsimsek@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 04:37:50 by ahsimsek          #+#    #+#             */
/*   Updated: 2026/09/03 04:40:40 by ahsimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *a;

	if (argc < 2)
		return(0);
	a = NULL;
	if (!parse_args(&a, argv))
	{
		ft_putstr_fd("Error\n", 2);
		return(1);
	}
	free_stack(&a);
	return(0);
}
