/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:11:56 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/10/25 20:57:08 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_counter(long nl)
{
	size_t	res;

	res = 1;
	if (nl < 0)
	{
		nl = -nl;
		res++;
	}
	while (nl >= 10)
	{
		nl /= 10;
		res++;
	}
	return (res);
}

static void	ft_fill(long nl, char *res, int i)
{
	while (nl > 0)
	{
		res[i--] = (nl % 10) + '0';
		nl /= 10;
	}
}

char	*ft_itoa(int n)
{
	char		*res;
	size_t		ssize;
	long		nl;

	nl = (long)n;
	ssize = ft_counter(nl);
	res = malloc(ssize + 1);
	if (!res)
		return (NULL);
	res[ssize] = '\0';
	if (nl == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nl < 0)
	{
		res[0] = '-';
		nl = -nl;
	}
	ft_fill(nl, res, ssize - 1);
	return (res);
}
