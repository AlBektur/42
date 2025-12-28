/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:46:41 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/10/12 03:06:34 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*res;
	size_t		i;
	size_t		memsize;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	memsize = nmemb * size;
	if (nmemb != 0 && memsize / nmemb != size)
		return (NULL);
	res = malloc(memsize);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < memsize)
	{
		res[i] = '\0';
		i++;
	}
	return ((void *)res);
}
