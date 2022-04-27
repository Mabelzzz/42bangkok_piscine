/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:04:15 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/02 17:04:21 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		index1;
	unsigned int		index2;

	index1 = 0;
	while (dest[index1] != 0)
	{
		index1++;
	}
	index2 = 0;
	while (index2 < nb && src[index2] != 0)
	{
		dest[index1] = src[index2];
		index1++;
		index2++;
	}
	dest[index1] = 0;
	return (dest);
}
