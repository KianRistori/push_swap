/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:47:42 by kristori          #+#    #+#             */
/*   Updated: 2023/01/12 11:38:13 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*move;
	int		n;

	if (argc <= 1)
		return (1);
	n = argc - 1;
	stack_a = NULL;
	stack_b = NULL;
	move = "";
	if (ft_check_error(argv, n) == 1)
		return (1);
	ft_init_stack(&stack_a, argv, n);
	while (move != NULL)
	{
		move = get_next_line(0);
		if (move != NULL)
			ft_move(&stack_a, &stack_b, move);
		free(move);
	}
	ft_check_checker(&stack_a, &stack_b);
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	return (0);
}

void	ft_move(t_stack **stack_a, t_stack **stack_b, char *move)
{
	if (ft_str_compare(move, "sa\n") == 0)
		ft_sa_checker(stack_a);
	else if (ft_str_compare(move, "sb\n") == 0)
		ft_sb_checker(stack_b);
	else if (ft_str_compare(move, "ss\n") == 0)
		ft_ss_checker(stack_a, stack_b);
	else if (ft_str_compare(move, "ra\n") == 0)
		ft_ra_checker(stack_a);
	else if (ft_str_compare(move, "rb\n") == 0)
		ft_rb_checker(stack_b);
	else if (ft_str_compare(move, "rr\n") == 0)
		ft_rr_checker(stack_a, stack_b);
	else if (ft_str_compare(move, "rra\n") == 0)
		ft_rra_checker(stack_a);
	else if (ft_str_compare(move, "rrb\n") == 0)
		ft_rrb_checker(stack_b);
	else if (ft_str_compare(move, "rrr\n") == 0)
		ft_rrr_checker(stack_a, stack_b);
	else if (ft_str_compare(move, "pa\n") == 0)
		ft_pa_checker(stack_a, stack_b);
	else if (ft_str_compare(move, "pb\n") == 0)
		ft_pb_checker(stack_a, stack_b);
}

void	ft_check_checker(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_is_sorted(*stack_a) == 0 && ft_stack_len(*stack_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	ft_check_error(char **argv, int n)
{
	if (ft_check_duplicate(argv, n) == 1)
		return (1);
	if (ft_check_int(argv, n) == 1)
		return (1);
	if (ft_check_non_numeric(argv, n) == 1)
		return (1);
	return (0);
}
