/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:39:48 by kristori          #+#    #+#             */
/*   Updated: 2022/12/07 12:42:49 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_case_3_n(int *stack_a)
{
	if ((stack_a[0] > stack_a[1]) && (stack_a[2] > stack_a[1]) && (stack_a[2] > stack_a[0]))
		ft_sa(stack_a);
	else if ((stack_a[0] > stack_a[1]) && (stack_a[2] > stack_a[1]) && (stack_a[0] > stack_a[2]))
		ft_ra(stack_a);
	else if ((stack_a[0] > stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] > stack_a[2]))
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if ((stack_a[1] > stack_a[0]) && (stack_a[1] > stack_a[2]) && (stack_a[2] > stack_a[0]))
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else if ((stack_a[1] > stack_a[0]) && (stack_a[1] > stack_a[2]) && (stack_a[2] > stack_a[0]))
		ft_rra(stack_a);
}

void	ft_case_5_n(int *stack_a, int *stack_b)
{
	ft_pb(stack_a, stack_b);
	ft_pb(stack_a, stack_b);
	ft_case_3_n(stack_a);
	ft_pa(stack_a, stack_b);
	ft_ra(stack_a);
	ft_pa(stack_a, stack_b);
}
