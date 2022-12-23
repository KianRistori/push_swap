/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:11:39 by kristori          #+#    #+#             */
/*   Updated: 2022/12/19 16:23:31 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = *stack_a;
	ft_swap(&tmp->data, &tmp->next->data);
	tmp = tmp->next->next;
	write(1, "sa\n", 3);
}

void	ft_sb(t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = *stack_b;
	ft_swap(&tmp->data, &tmp->next->data);
	tmp = tmp->next->next;
	write(1, "sb\n", 3);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
