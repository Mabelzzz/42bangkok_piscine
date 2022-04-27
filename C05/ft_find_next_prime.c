/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:13:56 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/07 00:16:14 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	index;

	index = 2;
	while (index * index <= nb)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
