/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 01:39:55 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/03 01:40:58 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare(char *str, char *to_find, int index)
{
	int	i;

	i = 0;
	while (to_find[i] != 0)
	{
		if (to_find[i] != str[index + i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	index;

	index = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[index] != 0)
	{
		if (str[index] == to_find[0])
		{
			if (compare(str, to_find, index) == 1)
				return (&str[index]);
		}
		index++;
	}
	return (0);
}
