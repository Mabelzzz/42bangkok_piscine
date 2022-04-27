/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:47:27 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/06 19:48:56 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
