/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_push_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:47:52 by kristori          #+#    #+#             */
/*   Updated: 2023/01/12 10:51:43 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_pa_checker(t_stack **stack_a, t_stack **stack_b)
{
	int	tmp;

	tmp = stack_b[0]->data;
	ft_remove_first_node(stack_b);
	ft_add_first(stack_a, tmp);
}

void	ft_pb_checker(t_stack **stack_a, t_stack **stack_b)
{
	int	tmp;

	tmp = stack_a[0]->data;
	ft_remove_first_node(stack_a);
	ft_add_first(stack_b, tmp);
}
