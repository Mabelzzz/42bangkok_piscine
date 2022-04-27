/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 07:15:41 by tphophan          #+#    #+#             */
/*   Updated: 2022/04/03 07:34:21 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdlib.h>
#include <unistd.h>

unsigned int	getdec(unsigned int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

unsigned int	getmult(unsigned int nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

void	ft_print(unsigned int n, t_list *tab, int *first)
{
	unsigned int	i;
	unsigned int	mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
		ft_print(n / mult, tab, first);
	if (*first == 0) //เว้นคำ
		write(1, " ", 1);
	*first = 0;
	while (ft_atoi(tab[i].nb) != mult) //key ==nb
		i++;
	ft_putstr(tab[i].val);
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, tab, first);
}

int	main(int ac, char *av[])
{
	t_list			*tab;
	int				*first;
	int				addr_first;
	unsigned int	nb;
	int				i;

	addr_first = 1;
	first = &addr_first;
	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		tab = process("numbers.dict");
		ft_print(nb, tab, first);
		write(1, "\n", 1);
		i = 0;
		while (i < 32)
		{
			free(tab[i].nb);
			free(tab[i].val);
			i++;
		}
		free(tab);
	}
	return (0);
}
