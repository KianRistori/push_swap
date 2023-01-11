/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:34:49 by kristori          #+#    #+#             */
/*   Updated: 2023/01/11 12:30:06 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include "get_next_line.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}			t_stack;

void	ft_init_stack(t_stack **stack, char **argv, int n);

void	ft_add_first(t_stack **head, int newData);
void	ft_add_last(t_stack **head, int newData);

void	ft_remove_first_node(t_stack **head);
void	ft_remove_last_node(t_stack **head);
int		ft_get_last_item(t_stack *head);

int		ft_stack_len(t_stack *head);
int		ft_get_index_val(t_stack *head, int index);

void	ft_swap(int *a, int *b);
void	ft_sa(t_stack **stack_a);
void	ft_sb(t_stack **stack_b);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);

void	ft_ra(t_stack **stack_a);
void	ft_rb(t_stack **stack_b);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);

void	ft_rra(t_stack **stack_a);
void	ft_rrb(t_stack **stack_b);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);

void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);

void	ft_case(t_stack *stack_a, t_stack *stack_b, t_stack *sort);

void	ft_sort_2_n_stack(t_stack **stack_a);

void	ft_sort_3_n_stack(t_stack **stack_a);

void	ft_sort_5_n(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_5_n_2(t_stack **stack_a, int i);

int		ft_check(char **argv, int n);
int		ft_check_int(char **argv, int n);
int		ft_check_non_numeric(char **argv, int n);
int		ft_check_duplicate(char **argv, int n);

int		ft_str_compare(char *str1, char *str2);

void	ft_sort_stack(t_stack *head);

void	ft_order_stack(t_stack *input, t_stack *sort);

void	ft_sort_big_stack(t_stack **stack_a, t_stack **stack_b);

void	ft_reorder_stack(t_stack *stack_a, t_stack *sort);
int		ft_is_sorted(t_stack *head);

void	ft_free_stack(t_stack *head);

int		ft_is_small(t_stack *head);
int		ft_find_index(t_stack *head, int n);

#endif
