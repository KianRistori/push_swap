/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:37:15 by kristori          #+#    #+#             */
/*   Updated: 2022/12/21 11:33:18 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*sort;
	int		n;

	n = argc - 1;
	stack_a = NULL;
	stack_b = NULL;
	sort = NULL;
	ft_init_stack(&stack_a, argv, n);
	ft_init_stack(&sort, argv, n);
	ft_sort_stack(sort);
	ft_order_stack(stack_a, sort);
	if (ft_stack_len(stack_a) == 3)
	{
		if (!ft_is_sorted(stack_a))
			ft_sort_3_n_stack(&stack_a);
	}
	ft_sort_big_stack(&stack_a, &stack_b);
	// ft_reorder_stack(stack_a, sort);
	// ft_print_stack(stack_a, stack_b);
}

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
