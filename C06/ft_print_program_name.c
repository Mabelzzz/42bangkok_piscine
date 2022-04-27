/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 00:31:28 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/04 00:53:15 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;

	(void) argc;
	index = -1;
	while (argv[0][++index] != 0)
		write(1, &argv[0][index], 1);
	write(1, "\n", 1);
	return (0);
}
