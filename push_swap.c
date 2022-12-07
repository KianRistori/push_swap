/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:18:38 by kristori          #+#    #+#             */
/*   Updated: 2022/12/07 12:39:03 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	*stack_b;

	stack_a = ft_init_stack_a(argc, argv);
	stack_b = ft_init_stack_b(argc);
	if (ft_array_lenght(stack_a) == 3)
		ft_case_3_n(stack_a);
	else if (ft_array_lenght(stack_a) == 5)
		ft_case_5_n(stack_a, stack_b);
	ft_write_stack(stack_a, stack_b);
	return (0);
}

int	*ft_init_stack_a(int argc, char **argv)
{
	int *ris;
	int		i;

	i = 0;
	ris = (int *)malloc(sizeof(int) * argc);
	if (!ris)
		return (NULL);
	while (i < argc)
	{
		ris[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (ris);
}

int	*ft_init_stack_b(int argc)
{
	int *ris;

	ris = (int *)malloc(sizeof(int) * argc);
	if (!ris)
		return (NULL);
	return (ris);
}


