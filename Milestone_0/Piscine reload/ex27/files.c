/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:37:11 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/10/02 05:38:07 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	dpfile(int file)
{
	int		flags;
	int		size;
	char	buffer[1024];

	flags = 0;
	while (flags == 0)
	{
		size = read(file, buffer, sizeof(buffer));
		if (size == 0)
			flags = 1;
		else
			write(1, buffer, size);
	}
	close(file);
}

int	main(int argc, char *argv[])
{
	int		file;

	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	dpfile(file);
	return (0);
}
