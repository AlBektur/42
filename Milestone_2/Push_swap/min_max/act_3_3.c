/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   act_3_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 16:56:39 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/13 16:57:59 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int	find_min_index(t_list *stack_a)
{
	int		min;
	int		index;
	int		i;
	t_list	*tmp;

	if (!stack_a)
		return (-1);
	min = stack_a->data;
	index = 0;
	i = 0;
	tmp = stack_a;
	while (tmp)
	{
		if (tmp->data < min)
		{
			min = tmp->data;
			index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (index);
}

int	find_max_index(t_list *stack_b)
{
	int		max;
	int		index;
	int		i;
	t_list	*tmp;

	if (!stack_b)
		return (-1);
	max = stack_b->data;
	index = 0;
	i = 0;
	tmp = stack_b;
	while (tmp)
	{
		if (tmp->data > max)
		{
			max = tmp->data;
			index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (index);
}
