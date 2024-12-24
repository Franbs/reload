/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:35:41 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/12/20 16:35:41 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str, int filedesc)
{
	if (str != NULL)
		write(filedesc, str, ft_strlen(str));
}

int	checkerrors(int ac)
{
	if (ac <= 1)
	{
		ft_putstr("File name missing.\n", 2);
		return (1);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n", 2);
		return (1);
	}
	return (0);
}

int	checkread(ssize_t bytesread)
{
	if (bytesread == -1)
	{
		ft_putstr("Error reading file.\n", 2);
		close(fd);
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	int		fd;
	ssize_t	bytesread;
	char	buffer[4096];

	if (checkerrors(ac) == 1)
		return (0);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n", 2);
		return (0);
	}
	bytesread = read(fd, buffer, 4096 - 1);
	while (bytesread > 0)
	{
		if (checkread == 0)
			return (0);
		buffer[bytesread] = '\0';
		ft_putstr(buffer, 1);
		bytesread = read(fd, buffer, 4096 - 1);
	}
	close(fd);
	return (0);
}
