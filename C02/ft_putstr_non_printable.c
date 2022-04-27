/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:51:23 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/03/30 15:03:35 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] < 32)
		{
			write(1, "\\", 1);
			write(1, &hex[str[i] / 16], 1);
			write(1, &hex[str[i] % 16], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
