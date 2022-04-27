/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:57:07 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/03 01:33:36 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	index1;
	unsigned int	index2;

	index1 = 0;
	while (dest[index1] != 0)
	{
		index1++;
	}
	index2 = 0;
	while (src[index2] != 0)
	{
		dest[index1] = src[index2];
		index1++;
		index2++;
	}
	dest[index1] = 0;
	return (dest);
}
