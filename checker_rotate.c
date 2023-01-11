/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:05:06 by kristori          #+#    #+#             */
/*   Updated: 2023/01/11 11:05:38 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_ra_checker(t_stack **stack_a)
{
	int	tmp;

	tmp = stack_a[0]->data;
	ft_remove_first_node(stack_a);
	ft_add_last(stack_a, tmp);
}

void	ft_rb_checker(t_stack **stack_b)
{
	int	tmp;

	tmp = stack_b[0]->data;
	ft_remove_first_node(stack_b);
	ft_add_last(stack_b, tmp);
}

void	ft_rr_checker(t_stack **stack_a, t_stack **stack_b)
{
	int	tmp;

	tmp = stack_a[0]->data;
	ft_remove_first_node(stack_a);
	ft_add_last(stack_a, tmp);
	tmp = stack_b[0]->data;
	ft_remove_first_node(stack_b);
	ft_add_last(stack_b, tmp);
}
