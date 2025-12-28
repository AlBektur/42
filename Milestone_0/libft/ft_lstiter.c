/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 22:52:38 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/20 23:34:00 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
/*
void	f(void *node)
{
	int	*n = (int *)node;
	*n = *n * 2; 
}

t_list	*new_node(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_list **head, t_list *new)
{
	t_list	*tail;

	tail = *head;
	while (tail->next)
		tail = tail->next;
	tail->next = new;
}

void	print_list(t_list *head)
{
	t_list	*temp;
	
	temp = head;
	while (temp)
	{
		printf("%d->", *(int *)temp->content);
		temp = temp->next;
	}
	printf("NULL\n");
}

int	main(int argc, char *argv[])
{
	t_list	*head;
	t_list	*temp;
	int	i = 1;
	int	*n;
	head = NULL;
	temp = NULL;

	while (argv[i])
	{
		n = malloc(sizeof(int));
		*n = atoi(argv[i]);
		if (head == NULL)
			head = new_node(n);
		else
		{
			temp = new_node(n);
			ft_lstadd_back(&head, temp);
		}
		i++;
	}
	print_list(head);
	ft_lstiter(head, &f);
	print_list(head);
	return (0);
}*/
