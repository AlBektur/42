/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   act_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 05:47:57 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/13 16:18:46 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int	find_insert_position(t_list *stack_b, int value)
{
	int		pos;
	int		min_pos;
	int		min_val;
	int		max_pos;
	int		max_val;

	pos = find_between_position(stack_b, value);
	if (pos != -1)
		return (pos);
	find_min_position(stack_b, &min_pos, &min_val);
	find_max_position(stack_b, &max_pos, &max_val);
	if (value > max_val)
		return (max_pos);
	if (value < min_val)
		return (min_pos + 1);
	return (0);
}

void	rotate_to_position(t_list **stack_b, int pos, int size)
{
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			rb(stack_b);
	}
	else
	{
		pos = size - pos;
		while (pos-- > 0)
			rrb(stack_b);
	}
}

void	insert_optimized(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	pos;

	size = list_size(stack_b);
	pos = find_insert_position(*stack_b, (*stack_a)->data);
	rotate_to_position(stack_b, pos, size);
	push_b(stack_a, stack_b);
}

void	act_2(t_list **stack_a, t_list **stack_b)
{
	if (*stack_b == NULL)
	{
		push_b(stack_a, stack_b);
		return ;
	}
	insert_optimized(stack_a, stack_b);
}
