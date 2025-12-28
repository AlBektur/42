/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:39:24 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/10/12 04:13:05 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	cc;
	size_t			i;

	src = (unsigned char *)s;
	cc = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (src[i] == cc)
		{
			return ((void *)(&src[i]));
		}
		i++;
	}
	return (0);
}
