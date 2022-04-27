/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 19:37:12 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/03/27 20:27:47 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// functions.c 

void	lines_to_array(int checktab[4][4], int swap[24][4], int linesnum[4]);
void	print_output(int matrix[4][4]);

// heap_swap

void	get_swap(int my_swap[24][4]);

// check.c 

int		check_matrix(int tab[4][4], int *value);

//Loop on the 331,776 possibilities, display and return to the first fix

void	loop(int lines[4], int checktab[4][4], int swap[24][4], int value[16])
{
	while (lines[0]++, lines[0] < 24)
	{
		lines[1] = 0;
		while (lines[1]++, lines[1] < 24)
		{
			lines[2] = 0;
			while (lines[2]++, lines[2] < 24)
			{
				lines[3] = 0;
				while (lines[3]++, lines[3] < 24)
				{
					lines_to_array(checktab, swap, lines);
					if (check_matrix(checktab, value) == 1)
					{
						print_output(checktab);
						return ;
					}
				}
			}
		}
	}
	write(1, "Error\n", 6);
}

/* Create and initialize the variables needed by the loop function and call it
 * Used only to win lines  */

void	resolve(int value[16])
{
	int	swap[24][4];
	int	checktab[4][4];
	int	linesnum[4];
	int	i_cur;

	i_cur = -1;
	while (i_cur++, i_cur < 4)
		linesnum[i_cur] = -1;
	get_swap(swap);
	loop(linesnum, checktab, swap, value);
}

/* Checks if the character of input[1] at index cur is in its place and if so
 * appends it to the array value.
 * Used to reduce the number of hand lines */

int	process_char(int cur, char **input, int value[16])
{
	if (cur > 31)
	{
		write(1, "Input Error\n", 12);
		return (1);
	}
	if (cur % 2 == 0)
	{ //
		if (input[1][cur] >= 48 && input[1][cur] <= 57)
			value[cur / 2] = input[1][cur] - 48;
		else
		{
			write(1, "Input Error\n", 12);
			return (1);
		}
	}
	else
	{
		if (input[1][cur] != ' ')
		{
			write(1, "Input Error\n", 12);
			return (1);
		}
	}
	return (0);
}

/* Main: get the input string and convert it to an array of values
 * then calls the resolve function with this array  */
// ./a.out "35  65" 
int	main(int argc, char **input)
{
	int	value[16];
	int	cur;

	if (argc != 2)
	{
		write(1, "Error : pls enter only single argument\n", 38);
		return (1);
	}
	cur = -1;
	while (cur++, input[1][cur] != 0)
	{
		if (process_char(cur, input, value) == 1)
			return (1);
	}
	resolve(value);
		printf("swap : %d/n", swap);
	for(int i=0;i<24;i++)
  	{
    	for(int j=0;j<4;j++)
    	{
     	 printf("Enter swap[%d][%d]: ",i,j);
      	scanf("%d", &swap[i][j]);
    }
    printf("\n");
  }
}
