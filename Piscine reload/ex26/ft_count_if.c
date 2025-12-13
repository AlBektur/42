/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 05:05:42 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/09/27 05:35:32 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (tab[i] != 0)
	{
		counter += f(tab[i]);
		i++;
	}
	return (counter);
}
