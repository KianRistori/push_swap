/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_n_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:10:03 by kristori          #+#    #+#             */
/*   Updated: 2022/12/21 11:23:52 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_5_n(t_stack **stack_a, t_stack **stack_b)
{
	ft_pb(stack_a, stack_b);
	ft_pb(stack_a, stack_b);
	ft_sort_3_n_stack(stack_a);
	if (ft_get_index_val(*stack_a, 0) > ft_get_index_val(*stack_b, 0))
		ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}
