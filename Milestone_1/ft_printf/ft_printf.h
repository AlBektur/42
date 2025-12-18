/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:06:59 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/10/25 23:42:40 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

int			ft_printf(const char *format, ...);
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_putpercentil(void);
int			ft_putnbr(int nb);
int			ft_put_unsigned_int(unsigned int n);
char		*ft_itoa(int nb);
char		*ft_utoa(unsigned int n);
int			ft_hexnum(unsigned int nb, int boolear);
int			ft_putpointer(void *ptr);
#endif 
