/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:51:37 by kristori          #+#    #+#             */
/*   Updated: 2022/12/21 11:08:48 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3_n_stack(t_stack **stack_a)
{
	if ((ft_get_index_val(*stack_a, 0) > ft_get_index_val(*stack_a, 1))
		&& (ft_get_index_val(*stack_a, 2) > ft_get_index_val(*stack_a, 1))
		&& (ft_get_index_val(*stack_a, 2)) > ft_get_index_val(*stack_a, 0))
		ft_sa(stack_a);
	else if ((ft_get_index_val(*stack_a, 0) > ft_get_index_val(*stack_a, 1))
		&& (ft_get_index_val(*stack_a, 1) > ft_get_index_val(*stack_a, 2))
		&& (ft_get_index_val(*stack_a, 0)) > ft_get_index_val(*stack_a, 2))
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if ((ft_get_index_val(*stack_a, 0) > ft_get_index_val(*stack_a, 1))
		&& (ft_get_index_val(*stack_a, 2) > ft_get_index_val(*stack_a, 1))
		&& (ft_get_index_val(*stack_a, 0)) > ft_get_index_val(*stack_a, 2))
		ft_ra(stack_a);
	else if ((ft_get_index_val(*stack_a, 1) > ft_get_index_val(*stack_a, 0))
		&& (ft_get_index_val(*stack_a, 1) > ft_get_index_val(*stack_a, 2))
		&& (ft_get_index_val(*stack_a, 2)) > ft_get_index_val(*stack_a, 0))
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else
		ft_rra(stack_a);
}
