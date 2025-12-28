/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:01:06 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/10/12 05:11:30 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dsize;
	size_t	i;
	size_t	ssize;
	size_t	cpsize;
	size_t	j;

	ssize = ft_strlen(src);
	dsize = ft_strlen(dst);
	if (size == 0)
		return (ssize);
	if (dsize >= size)
		return (size + ssize);
	i = dsize;
	j = 0;
	cpsize = size - dsize - 1;
	while (cpsize > 0 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
		cpsize--;
	}
	dst[i] = '\0';
	return (dsize + ssize);
}
