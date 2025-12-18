/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:47:42 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/10/25 23:18:42 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	processor(char hex_chars[], char buffer[], unsigned long n)
{
	int			i;
	int			j;
	int			c;

	c = 0;
	i = 0;
	if (n == 0)
		buffer[i++] = '0';
	else
	{
		while (n > 0)
		{
			buffer[i++] = hex_chars[n % 16];
			n /= 16;
		}
	}
	j = i - 1;
	while (j >= 0)
	{
		if (ft_putchar(buffer[j--]) == -1)
			return (-1);
		c++;
	}
	return (c);
}

int	ft_putpointer(void *ptr)
{
	int					counter;
	unsigned long		n;
	char				buffer[32];
	int					res;
	char				*hex_chars;

	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	counter = ft_putstr("0x");
	if (counter == -1)
		return (-1);
	n = (unsigned long)ptr;
	hex_chars = "0123456789abcdef";
	res = processor(hex_chars, buffer, n);
	if (res == -1)
		return (-1);
	return (counter + res);
}
