/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 19:52:45 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/20 22:13:40 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_list **head, t_list *new)
{
	t_list	*tmp;

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->next = NULL;
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
	t_list	*head = NULL;
	t_list	*tail = NULL;
	t_list	*temp = NULL;

	int	i = 1;
	while (argv[i] != NULL)
	{
		if (head == NULL)
			head = new_node(strdup(argv[i]));
		else
		{
			temp = new_node(strdup(argv[i]));
			ft_lstadd_back(&head, temp);
		}
		i++;
	}
	print_list(head);
	temp = head;
	head = head->next;
	ft_lstdelone(temp, &del);
	print_list(head);
	return (0);
}
*/
