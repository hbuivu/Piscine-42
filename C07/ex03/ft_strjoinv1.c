/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:52:34 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/19 15:22:41 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
			j++;
		len = len + j;
		j = 0;
		i++;
	}
	while (sep[j] != '\0')
		j++;
	len += 1 + ((size - 1) * j);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;

	i = 0;
	if (size <= 0)
		ptr = malloc(1);
		return (ptr);
	ptr = malloc(sizeof(char) * ft_len(size, strs, sep));
	if (ptr)
	{
		i = 0;
		while (i < size)
		{
			ft_strcat(ptr, strs[i]);
			if (i != size - 1)
				ft_strcat(ptr, sep);
			i++;
		}
		return (ptr);
	}
	return (0);
}


