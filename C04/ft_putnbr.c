/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 23:00:36 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/05 02:20:01 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	power_ten(int n)
{
	int	p;	

	p = 1;
	if (n != 0)
	{
		while (n >= 1)
		{
			p *= 10;
			n--;
		}
		return (p);
	}
	else
	{
		return (1);
	}
}

int	count_nbr(int nb)
{
	int	c;

	c = 0;
	while (c <= 10)
	{
		nb = nb / 10;
		c++;
		if (nb == 0)
		{
			break ;
		}
	}
	return (c);
}

void	show_nbr(int nb, int count)
{
	int	nb1;

	nb1 = 0;
	while (count >= 1)
	{
		nb1 = nb / power_ten(count - 1);
		putchar(nb1 % 10 + '0');
		count--;
	}
}

void	ft_putnbr(int nb)
{
	char	*max;
	int		index;

	if (nb >= 0 && nb <= 2147483647)
	{
		show_nbr(nb, count_nbr(nb));
	}
	else if (nb < 0 && nb > -2147483648)
	{
		putchar('-');
		show_nbr(-nb, count_nbr(-nb));
	}
	else if (nb == -2147483648)
	{
		putchar('-');
		index = 0;
		max = "2147483648";
		while (index < 10)
		{
			putchar(max[index]);
			index++;
		}
	}
}
