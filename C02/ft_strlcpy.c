/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:01:36 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/03/29 00:17:12 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	c;

	l = 0;
	c = 0;
	while (src[c] != '\0')
		c++;
	if (size != 0)
	{
		while (src[l] != '\0' && l < size - 1)
		{
			dest[l] = src[l];
			l++;
		}
		dest[l] = '\0';
	}
	return (c);
}
