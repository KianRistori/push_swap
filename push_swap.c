/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:37:15 by kristori          #+#    #+#             */
/*   Updated: 2023/01/11 12:09:03 by kristori         ###   ########.fr       */
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
	if (ft_check(argv, n) == 1)
		return (1);
	ft_init_stack(&stack_a, argv, n);
	ft_init_stack(&sort, argv, n);
	ft_case(stack_a, stack_b, sort);
	ft_free_stack(stack_a);
	ft_free_stack(sort);
	return (0);
}

void	ft_case(t_stack *stack_a, t_stack *stack_b, t_stack *sort)
{
	if (ft_is_sorted(stack_a) != 0)
	{
		if (ft_stack_len(stack_a) == 2)
			ft_sort_2_n_stack(&stack_a);
		else if (ft_stack_len(stack_a) == 3)
			ft_sort_3_n_stack(&stack_a);
		else if (ft_stack_len(stack_a) == 5)
			ft_sort_5_n(&stack_a, &stack_b);
		else
		{
			ft_sort_stack(sort);
			ft_order_stack(stack_a, sort);
			ft_sort_big_stack(&stack_a, &stack_b);
		}
	}
}
