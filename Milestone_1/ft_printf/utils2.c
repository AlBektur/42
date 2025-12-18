/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 06:08:03 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/10/25 20:31:50 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char		*res;
	int			counter;

	counter = 0;
	res = ft_itoa(n);
	counter += ft_putstr(res);
	free(res);
	return (counter);
}

int	ft_put_unsigned_int(unsigned int n)
{
	char		*res;
	int			counter;

	counter = 0;
	if (n == UINT_MAX)
	{
		counter += ft_putstr("4294967295");
		return (counter);
	}
	res = ft_utoa(n);
	counter += ft_putstr(res);
	free(res);
	return (counter);
}
