/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/10/04 05:41:47 by bsaipidi	       #+#    #+#	      */
/*   Updated: 2025/10/11 16:12:05 by bsaipidi         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		*p = '\0';
		p++;
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];

    // Fill buffer with non-zero values
    memset(buffer, 'A', sizeof(buffer));

    // Show buffer before zeroing
    printf("Before my_bzero: ");
    for (int i = 0; i < sizeof(buffer); i++) {
	printf("%c ", buffer[i]);
    }
    printf("\n");

    // Use your custom bzero
    ft_bzero(buffer, sizeof(buffer));

    // Show buffer after zeroing
    printf("After my_bzero:  ");
    for (int i = 0; i < sizeof(buffer); i++) {
	printf("%d ", buffer[i]); // Print as int to show zeros
    }
    printf("\n");

    return 0;
}*/
