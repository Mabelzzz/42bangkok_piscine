#include <unistd.h>

void    get_key(int argc, char **key)
{
    //get only one argument
    if (argc == 2)
    {
        //check the argument is valid unsined int
        if (check_valid(key) == 1)
        {

        }
    }
    //get two argumets
    else if (argc == 3)
    {

    }
    else
    {
        //error
    }
}

/* Check the argument is valid unsined int
   Return 1 >> is valid unsined int
   Return 0 >> isn't valid unsined int
*/
int check_valid(char **key)
{
   //
    return (0);
}

int ft_strlen(char *str)
{
    int index;

    index = 0;
    while (str[index] != 0)
    {
        index++;
    }
    return (index);
}

char    *ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[i] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}