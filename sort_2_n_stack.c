/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_n_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:02:55 by kristori          #+#    #+#             */
/*   Updated: 2022/12/25 16:04:42 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_2_n_stack(t_stack **stack_a)
{
	if (ft_get_index_val(*stack_a, 0) > ft_get_index_val(*stack_a, 1))
		ft_ra(stack_a);
}
