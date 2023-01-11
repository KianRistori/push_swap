/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:42:24 by kristori          #+#    #+#             */
/*   Updated: 2023/01/11 12:12:42 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"

void	ft_move(t_stack **stack_a, t_stack **stack_b, char *move);
void	ft_check_checker(t_stack **stack_a, t_stack **stack_b);

void	ft_pa_checker(t_stack **stack_a, t_stack **stack_b);
void	ft_pb_checker(t_stack **stack_a, t_stack **stack_b);

void	ft_sa_checker(t_stack **stack_a);
void	ft_sb_checker(t_stack **stack_b);
void	ft_ss_checker(t_stack **stack_a, t_stack **stack_b);

void	ft_ra_checker(t_stack **stack_a);
void	ft_rb_checker(t_stack **stack_b);
void	ft_rr_checker(t_stack **stack_a, t_stack **stack_b);

void	ft_rra_checker(t_stack **stack_a);
void	ft_rrb_checker(t_stack **stack_b);
void	ft_rrr_checker(t_stack **stack_a, t_stack **stack_b);

#endif
