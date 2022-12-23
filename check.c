/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <kristori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:26:39 by kristori          #+#    #+#             */
/*   Updated: 2022/12/19 16:30:37 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_check_duplicate(t_stack *head)
{
	t_stack	*ptr;

	ptr = head->next;
	while (ptr != NULL)
	{
		if (head->data == ptr->data)
			return (1);
		ptr = ptr->next;
	}
	head = head->next;
	return (0);
}
