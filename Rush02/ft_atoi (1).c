/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:25:37 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/03 13:25:42 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <unistd.h>
#include <stdlib.h>

unsigned int	ft_atoi(const char *str)
{
	unsigned int	res;
	int				i;

	res = 0;
	i = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		str++;
		i++;
	}
	if (*str == '.' || *str == ',')
	{
		write(1, "Error\n", 6);
		exit (1);
	}
	if (i > 11)
	{
		write(1, "Error\n", 6);
		exit (1);
	}
	return (res);
}
