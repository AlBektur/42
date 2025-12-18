/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:20:56 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/14 04:54:41 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

t_list	*make_node(int data)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

static int	arg_counter(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		i++;
	}
	return (i);
}

static int	is_dup(long value, t_list *head)
{
	t_list	*temp;

	if (head == NULL)
		return (1);
	temp = head;
	while (temp)
	{
		if (temp->data == value)
		{
			ft_killer(head);
			write(2, "Error\n", 6);
			exit(1);
		}
		temp = temp->next;
	}
	return (1);
}

static t_list	*make_list(int argc, char **tokens, int value)
{
	t_list	*temp;
	t_list	*head;
	t_list	*tail;
	int		i;

	head = NULL;
	i = 0;
	while (i < argc)
	{
		value = ft_atol(tokens[i], head);
		is_dup(value, head);
		temp = make_node(value);
		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
		i++;
	}
	return (head);
}

t_list	*make_stack(int argc, char **argv)
{
	t_list	*head;
	char	**tokens;
	int		size;
	int		value;

	value = 0;
	if (argc == 1)
		exit(1);
	else if (argc == 2)
	{
		tokens = ft_split(argv[1], ' ');
		ft_split_controler(tokens);
		size = arg_counter(tokens);
		head = make_list(size, tokens, value);
		ft_split_cleaner(tokens);
	}
	else
	{
		tokens = argv + 1;
		size = argc - 1;
		head = make_list(size, tokens, value);
	}
	return (head);
}
