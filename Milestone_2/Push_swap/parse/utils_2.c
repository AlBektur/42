/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 11:19:34 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/13 22:27:42 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int	is_valid_split(char const *tokens)
{
	int	i;

	if (!tokens)
		return (-1);
	i = 0;
	while (tokens[i])
	{
		if (tokens[i] >= '0' && tokens[i] <= '9')
			return (1);
		i++;
	}
	return (-1);
}

void	is_sorted(t_list *stack_a)
{
	t_list	*temp;

	temp = stack_a;
	while (temp->next != NULL)
	{
		if (temp->data < temp->next->data)
			temp = temp->next;
		else
			return ;
	}
	ft_killer(stack_a);
	exit(2);
}

int	list_size(t_list **stack)
{
	t_list	*temp;
	int		i;

	temp = *stack;
	i = 0;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

int	is_sorted_list(t_list *stack)
{
	t_list	*temp;

	temp = stack;
	while (temp->next != NULL)
	{
		if (temp->data < temp->next->data)
			temp = temp->next;
		else
			return (-1);
	}
	return (1);
}
