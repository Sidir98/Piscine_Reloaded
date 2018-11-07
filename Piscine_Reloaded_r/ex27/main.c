/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 23:33:51 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/07 18:52:20 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 10

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_putchar_error(char c)
{
	write(2, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = *str;
	while (c != '\0')
	{
		ft_putchar(c);
		c = str[++i];
	}
}

void	ft_putstr_error(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = *str;
	while (c != '\0')
	{
		ft_putchar_error(c);
		c = str[++i];
	}
}

int		main(int argc, char *argv[])
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc < 2)
	{
		ft_putstr_error("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr_error("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	return (0);
}
