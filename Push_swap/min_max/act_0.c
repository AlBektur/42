/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   act_0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:30:57 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/13 17:18:18 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

static void	sort_3(t_list **stack)
{
	t_list	*a;

	a = *stack;
	if (a->data > a->next->data && a->next->data < a->next->next->data
		&& a->data < a->next->next->data)
		sa(stack);
	else if (a->data > a->next->data && a->next->data < a->next->next->data
		&& a->data > a->next->next->data)
		ra(stack);
	else if (a->data < a->next->data && a->next->data > a->next->next->data
		&& a->data > a->next->next->data)
		rra(stack);
	else if (a->data > a->next->data && a->next->data > a->next->next->data)
	{
		sa(stack);
		rra(stack);
	}
	else if (a->data < a->next->data && a->next->data > a->next->next->data
		&& a->data < a->next->next->data)
	{
		sa(stack);
		ra(stack);
	}
}

int	find_min(t_list *stack)
{
	int		index;
	int		min_index;
	int		min_value;
	t_list	*tmp;

	index = 0;
	min_index = 0;
	min_value = stack->data;
	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->data < min_value)
		{
			min_value = tmp->data;
			min_index = index;
		}
		tmp = tmp->next;
		index++;
	}
	return (min_index);
}

void	move_min_to_top(t_list **a, int min_index)
{
	int	size;
	int	i;

	size = list_size(a);
	i = 0;
	if (min_index <= size / 2)
		while (i++ < min_index)
			ra(a);
	else
		while (i++ < size - min_index)
			rra(a);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	min_index;
	int	size;

	size = list_size(stack_a);
	while (size > 3)
	{
		min_index = find_min(*stack_a);
		move_min_to_top(stack_a, min_index);
		push_b(stack_a, stack_b);
		size = list_size(stack_a);
	}
	sort_3(stack_a);
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
}

void	act_0(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = list_size(stack_a);
	if (size == 1)
		return ;
	else if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 5)
		sort_five(stack_a, stack_b);
}
