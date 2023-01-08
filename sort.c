/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:13:30 by kristori          #+#    #+#             */
/*   Updated: 2022/12/23 15:59:45 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_stack(t_stack *head)
{
	t_stack	*ptr1;
	t_stack	*lptr;
	int		swapped;

	lptr = NULL;
	if (head == NULL)
		return ;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		ptr1 = head;
		while (ptr1->next != lptr)
		{
			if (ptr1->data > ptr1->next->data)
			{
				ft_swap(&ptr1->data, &ptr1->next->data);
				swapped = 1;
			}
			ptr1 = ptr1->next;
		}
		lptr = ptr1;
	}
}

void	ft_order_stack(t_stack *input, t_stack *sort)
{
	t_stack	*tmp;
	int		k;

	tmp = sort;
	k = 0;
	while (input != NULL)
	{
		while (sort != NULL)
		{
			if (input->data == sort->data)
			{
				input->data = k;
				break ;
			}
			k++;
			sort = sort->next;
		}
		k = 0;
		sort = tmp;
		input = input->next;
	}
}

void	ft_reorder_stack(t_stack *stack_a, t_stack *sort)
{
	while (stack_a != NULL)
	{
		stack_a->data = sort->data;
		stack_a = stack_a->next;
		sort = sort->next;
	}
}
