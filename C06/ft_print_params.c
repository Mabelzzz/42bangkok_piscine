/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 00:55:40 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/04 01:10:14 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index1;
	int	index2;

	index1 = 0;
	while (index1 < argc - 1)
	{
		index2 = 0;
		while (argv[index1 + 1][index2] != 0)
		{
			write(1, &argv[index1 + 1][index2], 1);
			index2++;
		}
		write(1, "\n", 1);
		index1++;
	}
	return (0);
}
