/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 22:14:24 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/20 22:51:56 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = ((*lst)->next);
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*
void	del(void *node)
{
	free(node);
}

t_list	*new_node(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if(!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list **head, t_list *new)
{
	new->next = *head;
	*head = new;
}

void	print_list(t_list *head)
{
	t_list	*temp;

	temp = head;
	while (temp)
	{
		printf("%s->", (char *)temp->content);
		temp = temp->next;
	}
	printf("NULL\n");
}

int	main(int argc, char *argv[])
{
	t_list	*head;
	t_list	*tail;
	t_list	*temp;
	int	i = 1;

	head= NULL;
	temp = NULL;
	while (argv[i] != NULL)
	{
		if (head == NULL)
			head = new_node(strdup(argv[i]));
		else
		{
			temp = new_node(strdup(argv[i]));
			ft_lstadd_front(&head, temp);
		}
		i++;
	}
	print_list(head);
	ft_lstclear(&head, &del);
//	print_list(head);
	return (0);
}*/
