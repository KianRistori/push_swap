/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:18:05 by kristori          #+#    #+#             */
/*   Updated: 2022/12/19 16:15:08 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **stack_a)
{
	int	tmp;

	tmp = ft_get_last_item(*stack_a);
	ft_remove_last_node(stack_a);
	ft_add_first(stack_a, tmp);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **stack_b)
{
	int	tmp;

	tmp = ft_get_last_item(*stack_b);
	ft_remove_last_node(stack_b);
	ft_add_first(stack_b, tmp);
	write(1, "rrb\n", 4);
}
