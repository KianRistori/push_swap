/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:03:44 by kristori          #+#    #+#             */
/*   Updated: 2023/01/11 11:11:43 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sa_checker(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = *stack_a;
	ft_swap(&tmp->data, &tmp->next->data);
	tmp = tmp->next->next;
}

void	ft_sb_checker(t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = *stack_b;
	ft_swap(&tmp->data, &tmp->next->data);
	tmp = tmp->next->next;
}

void	ft_ss_checker(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = *stack_a;
	ft_swap(&tmp->data, &tmp->next->data);
	tmp = tmp->next->next;
	tmp = *stack_b;
	ft_swap(&tmp->data, &tmp->next->data);
	tmp = tmp->next->next;
}
