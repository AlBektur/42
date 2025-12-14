/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 21:02:05 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/14 00:13:42 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int	def_range_end(int i, int range_num, int size, int range_size)
{
	if (i == range_num - 1)
		return (size - 1);
	else
		return (range_size * (i + 1) - 1);
}

int	in_range(t_list *stack_a, int start, int end)
{
	t_list	*temp;

	temp = stack_a;
	while (temp)
	{
		if (temp->data >= start && temp->data <= end)
			return (1);
		temp = temp->next;
	}
	return (0);
}

int	def_range_size(t_list **stack_a)
{
	if (list_size(stack_a) <= 100)
		return (5);
	return (13);
}
