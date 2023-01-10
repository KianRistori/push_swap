/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:42:24 by kristori          #+#    #+#             */
/*   Updated: 2023/01/10 15:33:02 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"
# include "get_next_line.h"

void	ft_move(t_stack **stack_a, t_stack **stack_b, char *move);
void	ft_check_checker(t_stack **stack_a, t_stack **stack_b);

#endif
