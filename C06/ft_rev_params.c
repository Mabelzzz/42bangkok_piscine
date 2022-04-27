/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:12:50 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/04 01:21:56 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;

	while (argc > 1)
	{
		index = 0;
		while (argv[argc - 1][index] != 0)
		{
			write(1, &argv[argc - 1][index], 1);
			index++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
