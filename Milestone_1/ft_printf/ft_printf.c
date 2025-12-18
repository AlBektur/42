/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 05:32:34 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/10/26 13:50:05 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_specifier(char c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == '%')
		return (1);
	else if (c == 'p' || c == 'x' || c == 'X' || c == 'u')
		return (1);
	return (0);
}

int	ft_specifier(char sp, va_list *args)
{
	int	result;

	if (sp == '%')
		result = ft_putpercentil();
	else if (sp == 'c')
		result = ft_putchar(va_arg(*args, int));
	else if (sp == 's')
		result = ft_putstr(va_arg(*args, char *));
	else if (sp == 'i' || sp == 'd')
		result = ft_putnbr(va_arg(*args, int));
	else if (sp == 'u')
		result = ft_put_unsigned_int(va_arg(*args, unsigned int));
	else if (sp == 'x')
		result = ft_hexnum(va_arg(*args, unsigned int), 1);
	else if (sp == 'X')
		result = ft_hexnum(va_arg(*args, unsigned int), 0);
	else if (sp == 'p')
		result = ft_putpointer(va_arg(*args, void *));
	else
		return (-1);
	if (result == -1)
		return (-1);
	return (result);
}

static int	handle_format(const char *f, va_list *args, int i, int counter)
{
	int	flag;

	while (f[i])
	{
		if (f[i] == '%')
		{
			if (!f[i + 1])
				return (-1);
			else if (is_specifier(f[i + 1]))
			{
				flag = ft_specifier(f[++i], &args);
				i++;
			}
			else
				flag = ft_putchar(f[i++]);
		}
		else
			flag = ft_putchar(f[i++]);
		if (flag == -1)
			return (-1);
		counter += flag;
	}
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			result;
	int			i;
	int			counter;

	i = 0;
	counter = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	result = handle_format(format, &args, i, counter);
	va_end(args);
	return (result);
}
/*
int	main(void)
{

	int	fta = ft_printf(NULL, "algo");
	printf("\n");
	int orgb = printf(NULL, "algo");
	printf("\n");
	printf("bytes: org= %d,  ft= %d\n", orgb, fta);
	int	x = 10;
	int sq = printf("org = %p\n", &x);
	int sa = ft_printf("ftd = %p\n", &x);

	printf("bytes: org=%d, ft=%d\n", sq, sa);
	printf("Hello%%%%%%%%%%    s%%%%%%%%%% World\n", "hahahha");
	ft_printf("Hello%%%%%%%%%%    s%%%%%%%%%% World\n", "hahahha");

	int ss = printf("%%%%%%he%cl%%%%%s%%%%%\n", 'A', "bektur");
	int sd = ft_printf("%%%%%%he%cl%%%%%s%%%%%\n", 'A', "bektur");
	printf("bytes: org=%d, ft=%d\n", ss, sd);
	int nb = 429496;

	int a = printf("org%: %i\n", -10);
	int b = ft_printf("ft%: %i\n", -10);


	unsigned int unb = 1234567890;
	int k = printf("test: %u\n", -1);
	int l = ft_printf("test: %u\n", -1);

	ft_printf("org u bytes: %d\n", k);
	ft_printf("ft u bytes: %d\n", l);

	ft_printf("max\n");
	printf("mix_org: %d %u %s %i %c\n", 123, -1, "bektur", 1000, 'a');
	ft_printf("mix_ft: %d %u %s %d %c\n", 123, -1, "bektur", 1000, 'a');

	printf("haha %42\n");
	ft_printf("haha %42\n");

	printf("org %d\n", 42);
	ft_printf("ft: %d\n", 42);
	
	ft_printf("next test\n");
	int kl = printf("org: %d %r", 42);
	printf("\n");
	int fl = ft_printf("org: %d %r", 42);
	printf("\n");

	printf("bytes: org= %d, ft=%d\n", kl, fl);

	int a1 = printf("org: %s\n", "hahahah");
	int a2 = printf("ftd: %s\n", "hahahah");

	printf("bytes: org = %d, ft= %d\n", a1, a2);

	int	x1 = printf("org: %Xx\n", 500);
	int     x2 = ft_printf("ftd: %Xx\n", 500);

	printf("bytes of the X: org=%d, ft=%d\n", x1, x2);

	int checka = printf("%%%%%");
	printf("\n");
	int checkb = ft_printf("%%%%%");
	printf("\n");
	printf("bytes: org=%d. ft=%d\n", checka, checkb);

	printf(NULL);
	ft_printf(NULL);

	return (0);
}*/
