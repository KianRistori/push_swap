/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:45:21 by kristori          #+#    #+#             */
/*   Updated: 2023/01/10 14:45:59 by kristori         ###   ########.fr       */
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

void	ft_print_stack(t_stack *stack_a, t_stack *stack_b)
{
	printf("\n");
	printf("a\n");
	while (stack_a != NULL)
	{
		printf("%d\n", stack_a->data);
		stack_a = stack_a->next;
	}
	printf("\n");
	printf("b\n");
	while (stack_b != NULL)
	{
		printf("%d\n", stack_b->data);
		stack_b = stack_b->next;
	}
}
