/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:52:51 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/10/25 23:21:33 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_filler(char hex[], unsigned int n)
{
	int				i;
	int				j;
	char			buffer[32];
	char			temp[8];

	if (n == 0)
		return (ft_putchar('0'));
	i = 0;
	while (n > 0)
	{
		temp[i++] = hex[n % 16];
		n /= 16;
	}
	j = 0;
	while (i > 0)
	{
		buffer[j++] = temp[--i];
	}
	buffer[j] = '\0';
	return (ft_putstr(buffer));
}

int	ft_hexnum(unsigned int nb, int lowercase)
{
	char	*cap_chars;
	char	*low_chars;

	cap_chars = "0123456789ABCDEF";
	low_chars = "0123456789abcdef";
	if (lowercase)
		return (ft_filler(low_chars, nb));
	else
		return (ft_filler(cap_chars, nb));
}
