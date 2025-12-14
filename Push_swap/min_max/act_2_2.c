/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   act_2_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:21:04 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/13 16:19:24 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int	find_between_position(t_list *stack_b, int value)
{
	int		pos;
	t_list	*curr;

	pos = 0;
	curr = stack_b;
	while (curr && curr->next)
	{
		if (curr->data > value && value > curr->next->data)
			return (pos + 1);
		curr = curr->next;
		pos++;
	}
	return (-1);
}

void	find_min_position(t_list *stack_b, int *min_pos, int *min_val)
{
	int			size;
	t_list		*curr;

	size = 0;
	*min_val = INT_MAX;
	*min_pos = 0;
	curr = stack_b;
	while (curr)
	{
		if (curr->data < *min_val)
		{
			*min_val = curr->data;
			*min_pos = size;
		}
		curr = curr->next;
		size++;
	}
}

void	find_max_position(t_list *stack_b, int *max_pos, int *max_val)
{
	int			size;
	t_list		*curr;

	size = 0;
	*max_val = INT_MIN;
	*max_pos = 0;
	curr = stack_b;
	while (curr)
	{
		if (curr->data > *max_val)
		{
			*max_val = curr->data;
			*max_pos = size;
		}
		curr = curr->next;
		size++;
	}
}
