/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:51:01 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/06 20:03:09 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	check_sqrt(long nb, long mid)
{
	long	nbr;
	long	middle;

	nbr = nb;
	middle = mid / 2;
	if (middle * middle < nbr)
	{
		while (middle <= nbr && middle * middle != nbr)
			middle++;
	}
	if (middle * middle > nbr)
	{
		while (middle >= 0 && middle * middle != nbr)
			middle--;
	}
	if (middle * middle == nbr)
		return (middle);
	return (0);
}

int	ft_sqrt(int nb)
{
	long	nbr;
	long	middle;

	nbr = nb;
	middle = nbr / 2;
	if (nbr >= 0)
		return ((int) check_sqrt(nbr, middle));
	return (0);
}
