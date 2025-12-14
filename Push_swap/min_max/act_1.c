/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   act_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 05:49:47 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/13 16:32:27 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

static int	calc(int current_index, int size)
{
	int		cost_ra;
	int		cost_rra;
	int		min_cost;

	cost_ra = current_index;
	cost_rra = size - current_index;
	min_cost = cost_ra;
	if (cost_rra < cost_ra)
		min_cost = cost_rra;
	return (min_cost);
}

static int	is_in_range(int value, int start, int end)
{
	return (value >= start && value <= end);
}

void	def_best_to_push(t_list *stack_a, int start, int end, int *best_index)
{
	t_list	*curr;
	int		i;
	int		best_cost;
	int		size;
	int		current_cost;

	*best_index = -1;
	best_cost = INT_MAX;
	size = list_size(&stack_a);
	curr = stack_a;
	i = 0;
	while (curr)
	{
		if (is_in_range(curr->data, start, end))
		{
			current_cost = calc(i, size);
			if (current_cost < best_cost)
			{
				best_cost = current_cost;
				*best_index = i;
			}
		}
		curr = curr->next;
		i++;
	}
}

void	rotate_to_top(t_list **stack_a, int best_index)
{
	int	size;
	int	count;

	if (best_index == -1)
		return ;
	size = list_size(stack_a);
	if (best_index <= size / 2)
	{
		count = best_index;
		while (count > 0)
		{
			ra(stack_a);
			count--;
		}
	}
	else
	{
		count = size - best_index;
		while (count > 0)
		{
			rra(stack_a);
			count--;
		}
	}
}

void	act_1(t_list **stack_a, int start_range, int end_range)
{
	int	best_index;

	if (!*stack_a)
		return ;
	def_best_to_push(*stack_a, start_range, end_range, &best_index);
	if (best_index != -1)
	{
		rotate_to_top(stack_a, best_index);
	}
}
