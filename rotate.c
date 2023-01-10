/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:44:12 by kristori          #+#    #+#             */
/*   Updated: 2022/12/20 21:35:49 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **stack_a)
{
	int	tmp;

	tmp = stack_a[0]->data;
	ft_remove_first_node(stack_a);
	ft_add_last(stack_a, tmp);
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **stack_b)
{
	int	tmp;

	tmp = stack_b[0]->data;
	ft_remove_first_node(stack_b);
	ft_add_last(stack_b, tmp);
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	int	tmp;

	tmp = stack_a[0]->data;
	ft_remove_first_node(stack_a);
	ft_add_last(stack_a, tmp);
	tmp = stack_b[0]->data;
	ft_remove_first_node(stack_b);
	ft_add_last(stack_b, tmp);
	write(1, "rr\n", 3);
}
