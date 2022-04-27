/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 09:19:25 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/05 02:18:34 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	result;
	int	minus;

	minus = 0;
	index = 0;
	result = 0;
	while ((str[index] == '\t' || str[index] == '\n' || str[index] == '\v'
			|| str[index] == '\f' || str[index] == '\r' || str[index] == ' '))
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			minus++;
		index++;
	}
	while (str[index] >= 48 && str[index] <= 57)
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	if (minus % 2 == 1)
		return (-result);
	return (result);
}
