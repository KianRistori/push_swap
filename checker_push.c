/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:02:40 by kristori          #+#    #+#             */
/*   Updated: 2023/01/11 11:03:13 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
