/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 14:37:48 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/20 19:15:56 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		counter;

	if (lst == NULL)
		return (0);
	temp = lst;
	counter = 0;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
/*
t_list	*new_node(void	*content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content =  content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list	**lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

void	pr_l(t_list *head)
{
	t_list	*temp;
	
	temp = head;
	while(temp)
	{
		printf("%s->", (char *)temp->content);
		temp = temp->next;
	}

}
int	main(int argc, char *argv[])
{
	int	i;
	t_list	*head;
	t_list	*new;

	i = 1;
	head = NULL;
	new = NULL;
	while (argv[i] != NULL)
	{
		if (head == NULL)
			head = new_node(argv[i]);
		else
		{
			new = new_node((void *)argv[i]);
			ft_lstadd_front(&head, new);
		}
		i++;
	}
	int	size;

	size = ft_lstsize(head);
	pr_l(head);
	printf("\n\n");
	printf("%d\n", size);
	return (0);
}

*/
