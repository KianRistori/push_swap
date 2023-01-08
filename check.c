/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:26:39 by kristori          #+#    #+#             */
/*   Updated: 2022/12/25 15:50:00 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check(char **argv, int n)
{
	if (ft_check_int(argv, n) == 1)
	{
		write(1, "Error\nInt not valid\n", 21);
		return (1);
	}
	if (ft_check_non_numeric(argv, n) == 1)
	{
		write(1, "Error\nNon numeric parameters\n", 30);
		return (1);
	}
	return (0);
}

int	ft_check_int(char **argv, int n)
{
	int	i;

	i = 1;
	while (i <= n)
	{
		if (ft_strcmp("2147483648", argv[i]))
			return (1);
		else if (ft_strcmp("-2147483649", argv[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_non_numeric(char **argv, int n)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= n)
	{
		while (j < ft_strlen(argv[i]))
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				j++;
			else
				return (1);
		}
		j = 0;
		i++;
	}
	return (0);
}

int	ft_strcmp(const char *X, const char *Y)
{
	while (*X)
	{
		if (*X != *Y) {
			return (0);
		}
		X++;
		Y++;
	}
	return (1);
}
