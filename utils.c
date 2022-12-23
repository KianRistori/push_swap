/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:16:59 by kristori          #+#    #+#             */
/*   Updated: 2022/12/19 16:21:59 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_index_val(t_stack *head, int index)
{
	t_stack	*current;
	int		k;

	k = 0;
	current = head;
	while (current != NULL)
	{
		if (k == index)
			return (current->data);
		k++;
		current = current->next;
	}
	return (0);
}

int	ft_stack_len(t_stack *head)
{
	t_stack	*current;
	int		k;

	k = 0;
	current = head;
	while (current != NULL)
	{
		k++;
		current = current->next;
	}
	return (k);
}

int	ft_get_last_item(t_stack *head)
{
	t_stack	*current;

	current = head;
	if (current == NULL)
		return (0);
	while (current->next != NULL)
		current = current->next;
	return (current->data);
}

void	ft_remove_last_node(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*last_node;

	if (*head != NULL)
	{
		if ((*head)->next == NULL)
			*head = NULL;
		else
		{
			tmp = *head;
			while (tmp->next->next != NULL)
				tmp = tmp->next;
			last_node = tmp->next;
			tmp->next = NULL;
			free(last_node);
		}
	}
}

void	ft_remove_first_node(t_stack **head)
{
	t_stack	*tmp;

	if (head == NULL)
		return ;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
}
