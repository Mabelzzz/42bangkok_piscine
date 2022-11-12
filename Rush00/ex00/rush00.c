

void ft_putchar(char c);

void    put_fmt(int row, int col, int x, int y)
{
    if (row == 0 && col == 0)
        ft_putchar('o');
    else if (row == 0 && col == y)
        ft_putchar('o');
    else if(row == x && col == 0)
        ft_putchar('o');
    else if(row == x && col == y)
        ft_putchar('o');
    else if (row == 0 || row == x)
        ft_putchar('-');
    else if (col == 0 || col == y)
        ft_putchar('|');
    else
        ft_putchar(' ');
}

void    rush(int x, int y)
{
    int row;
    int col;

    row = 0;
    if (x <= 0 || y <= 0)
        return ;
    while (row < x)
    {
        col = 0;
        while (col < y)
        {
            put_fmt(row, col, x - 1, y - 1);
            col++;
        }
        ft_putchar('\n');
        row++;
    }
}