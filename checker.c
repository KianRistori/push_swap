/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:13:07 by kristori          #+#    #+#             */
/*   Updated: 2023/01/10 16:10:04 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*move;
	int		n;

	n = argc - 1;
	stack_a = NULL;
	stack_b = NULL;
	move = "";
	if (ft_check(argv, n) == 1)
		return (1);
	ft_init_stack(&stack_a, argv, n);
	while (move != NULL)
	{
		move = get_next_line(0);
		ft_move(&stack_a, &stack_b, move);
	}
	ft_check_checker(&stack_a, &stack_b);
	ft_free_stack(stack_a);
}

void	ft_move(t_stack **stack_a, t_stack **stack_b, char *move)
{
	if (ft_str_compare(move, "sa"))
		ft_sa(stack_a);
	else if (ft_str_compare(move, "sb"))
		ft_sb(stack_b);
	else if (ft_str_compare(move, "ss"))
		ft_ss(stack_a, stack_b);
	else if (ft_str_compare(move, "ra"))
		ft_ra(stack_a);
	else if (ft_str_compare(move, "rb"))
		ft_rb(stack_b);
	else if (ft_str_compare(move, "rr"))
		ft_rr(stack_a, stack_b);
	else if (ft_str_compare(move, "rra"))
		ft_rra(stack_a);
	else if (ft_str_compare(move, "rrb"))
		ft_rrb(stack_b);
	else if (ft_str_compare(move, "rrr"))
		ft_rrr(stack_a, stack_b);
	else if (ft_str_compare(move, "pa"))
		ft_pa(stack_a, stack_b);
	else if (ft_str_compare(move, "pb"))
		ft_pa(stack_a, stack_b);
}

void	ft_check_checker(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_is_sorted(*stack_a) == 0 && ft_stack_len(*stack_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
