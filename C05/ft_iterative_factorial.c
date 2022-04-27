/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:41:21 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/06 19:42:06 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		while (nb > 1)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	return (0);
}
