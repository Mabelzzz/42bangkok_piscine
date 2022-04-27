/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:43:55 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/03 01:36:20 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	unsigned int	index;

	index = 0;
	while (index < n && (s1[index] != 0 || s2[index] != 0))
	{
		if (s1[index] != s2[index])
		{
			diff = s1[index] - s2[index];
			if (diff > 0)
				return (1);
			else
				return (-1);
		}
		index++;
	}
	return (0);
}
