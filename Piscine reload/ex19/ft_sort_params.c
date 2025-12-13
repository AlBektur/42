/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:08:49 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/09/25 15:17:24 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_sort_params(int argc, char **argv)
{
	char	*tmp;
	int		count;
	int		count2;

	count = 1;
	while (count < argc -1)
	{
		count2 = count + 1;
		while (count2 < argc)
		{
			if (ft_strcmp(argv[count], argv[count2]) > 0)
			{
				tmp = argv[count];
				argv[count] = argv[count2];
				argv[count2] = tmp;
			}
			count2++;
		}
		count++;
	}
}

int	main(int argc, char **argv)
{
	int	count;

	ft_sort_params(argc, argv);
	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count]);
		ft_putchar('\n');
		count++;
	}
	return (0);
}
