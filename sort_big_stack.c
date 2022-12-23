/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:24:06 by kristori          #+#    #+#             */
/*   Updated: 2022/12/21 11:31:20 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_big_stack(t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	int	j;
	int	size;
	int	num;

	size = ft_stack_len(*stack_a);
	i = 0;
	while (ft_is_sorted(*stack_a) != 0)
	{
		j = 0;
		while (j++ < size)
		{
			num = ft_get_index_val(*stack_a, 0);
			if ((num >> i & 1) == 1)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
		}
		while (ft_stack_len(*stack_b) != 0)
			ft_pa(stack_a, stack_b);
		i++;
	}
}

int		ft_is_sorted(t_stack *head)
{
	t_stack	*t;

	if (head == NULL)
		return (0);
	t = head;
	while (t->next != NULL)
	{
		if (t->data > t->next->data)
			return (1);
		t = t->next;
	}
	return (0);
}
