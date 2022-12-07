/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:28:13 by kristori          #+#    #+#             */
/*   Updated: 2022/12/07 11:05:54 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>

int		*ft_init_stack_a(int argc, char **argv);
int		*ft_init_stack_b(int argc);
int		ft_array_lenght(int *stack);
void	ft_write_stack(int *stack_a, int *stack_b);
void	ft_pa(int* stack_a, int *stack_b);
void	ft_pb(int* stack_a, int *stack_b);
void	ft_sa(int *stack_a);
void	ft_sb(int *stack_b);
void	ft_ss(int *stack_a, int *stack_b);
void	ft_ra(int *stack_a);
void	ft_rb(int *stack_b);
void	ft_rr(int *stack_a, int *stack_b);
void	ft_rra(int *stack_a);
void	ft_rrb(int *stack_b);
void	ft_rrr(int *stack_a, int *stack_b);

void	ft_case_3_n(int *stack_a);
void	ft_case_5_n(int *stack_a, int *stack_b);

#endif
