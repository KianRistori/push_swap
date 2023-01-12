/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_swap_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:48:21 by kristori          #+#    #+#             */
/*   Updated: 2023/01/12 10:51:54 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
