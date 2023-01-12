/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_reverse_rotate_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:48:01 by kristori          #+#    #+#             */
/*   Updated: 2023/01/12 10:51:47 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_rra_checker(t_stack **stack_a)
{
	int	tmp;

	tmp = ft_get_last_item(*stack_a);
	ft_remove_last_node(stack_a);
	ft_add_first(stack_a, tmp);
}

void	ft_rrb_checker(t_stack **stack_b)
{
	int	tmp;

	tmp = ft_get_last_item(*stack_b);
	ft_remove_last_node(stack_b);
	ft_add_first(stack_b, tmp);
}

void	ft_rrr_checker(t_stack **stack_a, t_stack **stack_b)
{
	int	tmp;

	tmp = ft_get_last_item(*stack_a);
	ft_remove_last_node(stack_a);
	ft_add_first(stack_a, tmp);
	tmp = ft_get_last_item(*stack_b);
	ft_remove_last_node(stack_b);
	ft_add_first(stack_b, tmp);
}
