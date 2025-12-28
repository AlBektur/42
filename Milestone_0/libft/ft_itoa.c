/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:11:56 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/10/10 18:55:05 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counter(long nl)
{
	size_t	res;

	res = 1;
	if (nl < 0)
	{
		nl *= -1;
		res++;
	}
	while (nl > 9)
	{
		nl /= 10;
		res++;
	}
	return (res);
}

static void	ft_fill(long nl, char *res, int i)
{
	char	ptch;

	while (nl > 0)
	{
		ptch = nl % 10;
		res[i] = ptch + 48;
		nl /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	ssize;
	long	nl;

	nl = n;
	ssize = ft_counter(nl);
	res = malloc(ssize + 1);
	if (res == NULL)
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
		nl *= -1;
	}
	ft_fill(nl, res, ssize - 1);
	return (res);
}
