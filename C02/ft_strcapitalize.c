/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:40:10 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/03/24 23:40:23 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_first(char *str, int i)
{
	if (str[i - 1] >= '0' && str[i - 1] <= '9')
	{
		return (1);
	}
	else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
	{	
		return (1);
	}
	else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_first(str, i) == 1)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		}
		else if (check_first(str, i) == 0)
		{	
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}		
