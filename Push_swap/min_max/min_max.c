/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:20:56 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/13 23:04:57 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	array_killer(int *array, t_list **stack_a)
{
	free(array);
	ft_killer(*stack_a);
}

void	insertion_sort(int *array, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	*make_sorted_array(t_list **stack_a)
{
	t_list		*temp;
	int			*array;
	int			size;
	int			i;

	size = list_size(stack_a);
	array = malloc(sizeof(int) * size);
	if (!array)
		array_killer(array, stack_a);
	temp = *stack_a;
	i = 0;
	while (temp)
	{
		array[i] = temp->data;
		temp = temp->next;
		i++;
	}
	insertion_sort(array, size);
	return (array);
}

void	min_max(t_list **stack_a, t_list **stack_b)
{
	int		i;

	i = 0;
	if (list_size(stack_a) < 6)
	{
		act_0(stack_a, stack_b);
		return ;
	}
	sort(stack_a, stack_b, i);
	act_3(stack_a, stack_b);
}
