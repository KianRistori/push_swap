/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:28:01 by kristori          #+#    #+#             */
/*   Updated: 2022/12/06 14:37:40 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(int *stack_a)
{
	int	tmp;
	int	i;

	tmp = stack_a[0];
	i = 0;
	while (i < ft_array_lenght(stack_a))
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[ft_array_lenght(stack_a)] = tmp;
	write(1, "ra\n", 3);
}

void	ft_rb(int *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_b[0];
	i = 0;
	while (i < ft_array_lenght(stack_b))
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[ft_array_lenght(stack_b)] = tmp;
	write(1, "rb\n", 3);
}

void	ft_rr(int *stack_a, int *stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
	write(1, "rr\n", 3);
}
