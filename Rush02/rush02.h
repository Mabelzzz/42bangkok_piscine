/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 07:16:22 by tphophan          #+#    #+#             */
/*   Updated: 2022/04/03 07:30:39 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

typedef struct s_list
{
	char	*nb;
	char	*val;
}		t_list;
unsigned int	ft_atoi(const char *str);
char			*ft_strdup(char *src);
char			*ft_strdup1(char *src);
void			ft_putstr(char *str);
char			*ft_getnb(int fd);
char			*ft_getval(int fd, char *c);
t_list			*process(char *file);
#endif
