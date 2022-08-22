/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:07:53 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/21 20:47:44 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr)
	{
		while (i < len)
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ptr;

	if (ac <= 0)
		return (NULL);
	ptr = (t_stock_str *)malloc (sizeof(t_stock_str) * (ac + 1));
	if (ptr)
	{	
		i = 0;
		while (i < ac)
		{	
			ptr[i].size = ft_strlen(av[i]);
			ptr[i].str = av[i];
			ptr[i].copy = ft_strdup(av[i]);
			i++;
		}
		ptr[i].str = NULL;
		return (ptr);
	}
	return (NULL);
}
