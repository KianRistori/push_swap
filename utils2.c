/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:45:21 by kristori          #+#    #+#             */
/*   Updated: 2023/01/11 12:29:22 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stack(t_stack **stack, char **argv, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_add_last(stack, ft_atoi(argv[i + 1]));
		i++;
	}
}

void	ft_add_first(t_stack **head, int newData)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->data = newData;
	new_node->next = *head;
	*head = new_node;
}

void	ft_add_last(t_stack **head, int newData)
{
	t_stack	*new_node;
	t_stack	*last_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->data = newData;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
}
