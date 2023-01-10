/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_n_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:10:03 by kristori          #+#    #+#             */
/*   Updated: 2022/12/21 11:23:52 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_5_n(t_stack **stack_a, t_stack **stack_b)
{
	int	n;
	int	i;

	n = ft_is_small(*stack_a);
	i = ft_find_index(*stack_a, n);
	ft_sort_5_n_2(stack_a, i);
	ft_pb(stack_a, stack_b);
	n = ft_is_small(*stack_a);
	i = ft_find_index(*stack_a, n);
	ft_sort_5_n_2(stack_a, i);
	ft_pb(stack_a, stack_b);
	if (ft_is_sorted(*stack_a) != 0)
		ft_sort_3_n_stack(stack_a);
	while (ft_stack_len(*stack_b) != 0)
		ft_pa(stack_a, stack_b);
}

void	ft_sort_5_n_2(t_stack **stack_a, int i)
{
	if (i != 0)
	{
		while (i < ft_stack_len(*stack_a))
		{
			ft_rra(stack_a);
			i++;
		}
	}
}

int	ft_is_small(t_stack *head)
{
	t_stack	*current;
	int		min;

	current = head;
	min = ft_get_index_val(head, 0);
	while (current != NULL)
	{
		if (current->data < min)
			min = current->data;
		current = current->next;
	}
	return (min);
}

int	ft_find_index(t_stack *head, int n)
{
	t_stack	*current;
	int		i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (current->data == n)
			break ;
		current = current->next;
		i++;
	}
	return (i);
}
