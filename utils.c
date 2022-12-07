/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:08:50 by kristori          #+#    #+#             */
/*   Updated: 2022/12/07 10:23:08 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_array_lenght(int *stack)
{
	int	i;

	i = 0;
	while (stack[i])
		i++;
	return (i);
}

void	ft_write_stack(int *stack_a, int *stack_b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack_a[i])
	{
		printf("%d	%d\n", stack_a[i], stack_b[j]);
		i++;
		j++;
	}
	printf("a	b\n");
}
