/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   act_3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 05:49:47 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/13 16:58:35 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

static void	rotate_a_to_top(t_list **stack_a, int index)
{
	int		size;
	int		count;

	size = list_size(stack_a);
	if (index <= size / 2)
	{
		count = index;
		while (count--)
			ra(stack_a);
	}
	else
	{
		count = size - index;
		while (count--)
			rra(stack_a);
	}
}

static void	push_sorted_a_to_b(t_list **stack_a, t_list **stack_b)
{
	int	min_index;

	while (*stack_a)
	{
		min_index = find_min_index(*stack_a);
		rotate_a_to_top(stack_a, min_index);
		push_b(stack_a, stack_b);
	}
}

static void	rotate_b_to_top(t_list **stack_b, int index)
{
	int	size;
	int	count;

	size = list_size(stack_b);
	if (index <= size / 2)
	{
		count = index;
		while (count--)
			rb(stack_b);
	}
	else
	{
		count = size - index;
		while (count--)
			rrb(stack_b);
	}
}

void	act_3(t_list **stack_a, t_list **stack_b)
{
	int		max_index;
	int		*sorted;
	int		min_value;

	push_sorted_a_to_b(stack_a, stack_b);
	while (*stack_b)
	{
		max_index = find_max_index(*stack_b);
		rotate_b_to_top(stack_b, max_index);
		push_a(stack_b, stack_a);
	}
	sorted = make_sorted_array(stack_a);
	if (!sorted)
		array_killer(sorted, stack_a);
	min_value = sorted[0];
	free(sorted);
	act_1(stack_a, min_value, min_value);
}
