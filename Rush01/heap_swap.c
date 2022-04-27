/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 19:49:42 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/03/27 20:26:58 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	g_swap[24][4];
int	g_cur;

// Put x in y and y in x

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

// Added the combination "v" to the list of combinations "g_swap"

void	add_swap(const int *v)
{
	g_swap[g_cur][0] = v[0];
	g_swap[g_cur][1] = v[1];
	g_swap[g_cur][2] = v[2];
	g_swap[g_cur][3] = v[3];
	g_cur = g_cur + 1;
}

// Recursive implementation of Heap's algorithm

void	heap_swap(int c[], int n)
{
	int	i;

	if (n == 1)
		add_swap(c);
	else
	{
		i = 0;
		while (i < n)
		{
			heap_swap(c, n - 1);
			if (n % 2 == 1)
				swap(&c[0], &c[n - 1]);
			else
				swap(&c[i], &c[n - 1]);
			i++;
		}
	}
}

// Copy each element of "m_old" into "m_new"

void	copy_array(int m_old[24][4], int m_new[24][4])
{
	int	cur1;
	int	cur2;

	cur1 = 0;
	while (cur1 < 24)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			m_new[cur1][cur2] = m_old[cur1][cur2];
			cur2++;
		}
		cur1++;
	}
}

// Generate permutations and copies in the "swap" array pass in parameters

void	get_swap(int swap[24][4])
{
	int	el[4];

	el[0] = 1;
	el[1] = 2;
	el[2] = 3;
	el[3] = 4;
	g_cur = 0;
	heap_swap(el, 4);
	copy_array(g_swap, swap);
}
