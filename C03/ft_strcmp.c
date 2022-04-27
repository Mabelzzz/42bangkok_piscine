/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:49:30 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/03 01:31:23 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;
	int	diff;

	index = 0;
	while (s1[index] == s2[index] && s1[index] != 0 && s2[index] != 0)
	{
		index++;
	}
	diff = s1[index] - s2[index];
	if (diff > 0)
		return (1);
	else if (diff < 0)
		return (-1);
	return (0);
}
