/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:38:19 by kristori          #+#    #+#             */
/*   Updated: 2022/12/06 15:35:51 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(int *stack_a)
{
	int	tmp;
	int	i;

	tmp = stack_a[ft_array_lenght(stack_a) - 1];
	i = ft_array_lenght(stack_a) - 1;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = tmp;
	write(1, "rra\n", 4);
}

void	ft_rrb(int *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_b[ft_array_lenght(stack_b) - 1];
	i = ft_array_lenght(stack_b) - 1;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = tmp;
	write(1, "rra\n", 4);
}

void	ft_rrr(int *stack_a, int *stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
	write(1, "rrr\n", 4);
}
