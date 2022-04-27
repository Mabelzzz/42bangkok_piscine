/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:27:24 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/04/07 01:31:55 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;
	int	diff;

	index = 0;
	while (s1[index] == s2[index] && s1[index] != 0 && s2[index] != 0)
		index++;
	diff = s1[index] - s2[index];
	return (diff);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	put_argv(int index1, char **argv)
{
	int	index2;

	while (index1 > 1)
	{
		index2 = 0;
		while (argv[index1 - 1][index2] != 0)
		{
			write(1, &argv[index1 - 1][index2], 1);
			index2++;
		}
		write(1, "\n", 1);
		index1--;
	}
}

int	main(int argc, char **argv)
{
	int	index1;
	int	compare;

	index1 = argc;
	while (argc > 1)
	{
		compare = argc - 2;
		while (compare > 0)
		{	
			if (ft_strcmp(argv[argc - 1], argv[compare]) > 0)
				ft_swap(&argv[argc - 1], &argv[compare]);
			compare--;
		}
		argc--;
	}
	put_argv(index1, argv);
	return (0);
}
