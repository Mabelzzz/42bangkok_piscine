/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 19:47:24 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/03/27 20:22:35 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
// Returns 1 if there are twice the same element in the array
// Returns 0 if all items are different.

int	el_in_matrix(int *row)
{
	int	cur;
	int	cur2;

	cur = 0;
	while (cur < 4)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			if (row[cur] == row[cur2] && cur != cur2)
				return (1);
			cur2++;
		}
		cur++;
	}
	return (0);
}

/* Fills the array checktab with the rows of the permutations specified by
 * linesnum. */

void	lines_to_array(int checktab[4][4], int swap[24][4], int linesnum[4])
{
	int	cur;
	int	cur2;

	cur = 0;
	cur2 = 0;
	while (cur < 4)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			checktab[cur][cur2] = swap[linesnum[cur]][cur2];
			cur2++;
		}
		cur++;
	}
}

// Take a 4x4 two-dimensional array and display it

void	print_output(int tab[4][4])
{
	int		cur;
	int		cur2;
	char	c;

	cur = 0;
	while (cur < 4)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			c = tab[cur][cur2] + '0';
			write(1, &c, 1);
			if (cur2 != 3)
				write(1, " ", 1);
			cur2++;
		}
		write(1, "\n", 1);
		cur++;
	}
}

// Functions that reverse the elements of the array passed as parameters

void	ft_rev_int_tab(int *tab, int size)
{
	int	cur;
	int	t;

	cur = 0;
	while (cur < size / 2)
	{
		t = tab[cur];
		tab[cur] = tab[size - 1 - cur];
		tab[size - 1 - cur] = t;
		cur++;
	}
}

// Fill an array of 4 elements with the elements of the column  number "col_num"

void	get_cols(int col_tab[4], int tab[4][4], int col_num)
{
	col_tab[0] = tab[0][col_num];
	col_tab[1] = tab[1][col_num];
	col_tab[2] = tab[2][col_num];
	col_tab[3] = tab[3][col_num];
}
