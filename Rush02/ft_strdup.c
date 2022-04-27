/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:30:34 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/03 13:41:08 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdlib.h>

char	*ft_strdup1(char *src)
{
	int		i;
	int		len;
	char	*dst;

	len = 0;
	while (src[len] != '\0' && ('0' <= src[len] && src[len] <= '9'))
		len++;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!(dst))
		return (0);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dst;

	len = 0;
	while (src[len] != '\0' && ('a' <= src[len] && src[len] <= 'z'))
		len++;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!(dst))
		return (0);
	i = 0;
	while (i < len && src[i] != 'p')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
