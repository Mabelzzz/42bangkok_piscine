/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 07:15:58 by tphophan          #+#    #+#             */
/*   Updated: 2022/04/03 07:50:15 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*ft_getnb(int fd)
{
	int		i;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * 12);
	read(fd, c, 1);
	i = 0;
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

char	*ft_getval(int fd, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 129);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

void	ft_addnb(int fd, char *tmp, int i, t_list *tab)
{
	tmp = ft_getnb(fd);
	tab[i].nb = ft_strdup1(tmp);
	free(tmp);
}

t_list	*process(char *file)
{
	char	c[1];
	t_list	*tab;
	char	*tmp;
	int		fd;
	int		i;

	fd = open(file, O_RDONLY);
	tab = malloc(sizeof(t_list) * 33);
	i = -1;
	while (i++ < 32)
	{
		ft_addnb(fd, tmp, i, tab);
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_getval(fd, c);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
	}
	close(fd);
	return (tab);
}
