/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 19:37:12 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/03/27 20:27:47 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// functions.c

int     el_in_matrix(int *row);
void    ft_rev_int_tab(int *tab, int size);
void    get_cols(int col_mat[4], int tab[4][4], int col_num);

/* Verifies that the line passed contains the correct number of visible boxes,
 * "value" is the values ??given by the instruction
 * Row can represent either a row or a column */

int check(int *row, int value)
{
    int stock;
    int cur;
    int num;

    cur = 1;
    stock = row[0];
    num = 1;
    while (num < 4)
    {
        if (row[num] > stock)
        {
            cur++;
            stock = row[num];
        }
        num++;
    }
    if (cur == value && el_in_matrix(row) == 0)
        return (1);
    else
        return (0);
}

/* Reverse the row/column pass, make it pass by check and
 * put it back in the right direction.
 * Allows to use the same check function to check both directions
 * of one row / column */

int check_reverse(int *row, int value)
{
    int ret;

    ft_rev_int_tab(row, 4);
    ret = check(row, value);
    ft_rev_int_tab(row, 4);
    return (ret);
}

/* Call the functions check then check_reverse on each line
 * value[i] is the value passed by the user for this line */

int check_rows(int tab[4][4], int *value)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (check(tab[i], value[i + 8]) == 0)
            return (0);
        else if (check_reverse(tab[i], value[i + 12]) == 0)
            return (0);
        i++;
    }
    return (1);
}

/* Call the functions check then check_reverse on each column
 * val[n] is the value passed by the user for this column
 * We use get_cols to put in test_tab all the values
 * of the column. */

int check_cols(int tab[4][4], int *value)
{
    int test_tab[4];
    int i;

    i = 0;
    while (i < 4)
    {
        get_cols(test_tab, tab, i);
        if (check(test_tab, value[i]) == 0)
            return (0);
        else if (check_reverse(test_tab, value[i + 4]) == 0)
            return (0);
        i++;
    }
    return (1);
}

/* Main function that calls the line checks function
 * then columns */
int check_matrix(int tab[4][4], int *value)
{
    if (check_rows(tab, value) == 0 || check_cols(tab, value) == 0)
        return (0);
    return (1);
}

