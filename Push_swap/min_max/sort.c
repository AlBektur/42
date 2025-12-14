/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 05:49:47 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/14 02:26:03 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

static void	prepare_ranges(t_list **stack_a, int *range_num,
			int *range_size, int **sorted)
{
	int	size;

	*sorted = make_sorted_array(stack_a);
	size = list_size(stack_a);
	*range_num = def_range_size(stack_a);
	*range_size = size / *range_num;
}

static void	process_range(t_list **stack_a, t_list **stack_b,
			int start_value, int end_value)
{
	while (in_range(*stack_a, start_value, end_value))
	{
		act_1(stack_a, start_value, end_value);
		act_2(stack_a, stack_b);
	}
}

void	sort(t_list **stack_a, t_list **stack_b, int i)
{
	int		range_num;
	int		range_size;
	int		range_start;
	int		*sorted;
	int		end_index;

	prepare_ranges(stack_a, &range_num, &range_size, &sorted);
	range_start = 0;
	i = 0;
	while (i < range_num)
	{
		end_index = def_range_end(i, range_num, list_size(stack_a), range_size);
		process_range(stack_a, stack_b, sorted[range_start], sorted[end_index]);
		range_start = end_index + 1;
		i++;
	}
	free(sorted);
}
