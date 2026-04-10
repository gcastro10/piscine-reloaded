/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:20:21 by goperez-          #+#    #+#             */
/*   Updated: 2026/04/09 17:41:42 by goperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_putstr_error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
	write(2, "\n", 1);
}

void	display_file(char *filename)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_error("Cannot read file.");
		return ;
	}
	ret = read(fd, buf, BUF_SIZE);
	while (ret > 0)
	{
		write(1, buf, ret);
		ret = read(fd, buf, BUF_SIZE);
	}
	if (ret == -1)
	{
		ft_putstr_error("Cannot read file.");
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr_error("File name missing.");
	}
	else if (argc > 2)
	{
		ft_putstr_error("Too many arguments.");
	}
	else
	{
		display_file(argv[1]);
	}
	return (0);
}
