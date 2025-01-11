/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:35:41 by fbanzo-s          #+#    #+#             */
/*   Updated: 2025/01/11 14:55:40 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str, int filedesc)
{
	int	i;

	i = 0;
	while (str[i])
		write(filedesc, &str[i++], 1);
}

int	ft_checkerrors(int ac)
{
	if (ac < 2)
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

int	ft_checkfd(int fd)
{
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n", 2);
		return (0);
	}
	return (1);
}

void	ft_print(const char *fn)
{
	int		fd;
	ssize_t	bytesread;
	char	buffer[4096];

	fd = open(fn, O_RDONLY);
	if (ft_checkfd(fd) == 0)
		return ;
	bytesread = read(fd, buffer, 4096);
	while (bytesread > 0)
	{
		write(1, buffer, bytesread);
		bytesread = read(fd, buffer, 4096);
	}
	close(fd);
}

int	main(int ac, char **av)
{
	if (ft_checkerrors(ac) == 1)
		return (1);
	ft_print(av[1]);
	return (0);
}
