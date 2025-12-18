/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 16:02:47 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/09/25 16:31:44 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

int	main(void)
{
	
	int *range = ft_range(19, 9);

	for(int i = 0 ; i < 10 ; i++)
	{
		printf("%d", range[i]);
	}
	return (0);
}
