/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:05:47 by kristori          #+#    #+#             */
/*   Updated: 2022/12/07 11:11:34 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(int* stack_a, int *stack_b)
{
	int	i;

	i = ft_array_lenght(stack_a);
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (stack_b[i])
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	write(1, "pa\n", 3);
}

void	ft_pb(int* stack_a, int *stack_b)
{
	int	i;

	i = ft_array_lenght(stack_b);
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = stack_a[0];
	i = 0;
	while (stack_a[i])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	write(1, "pb\n", 3);
}
