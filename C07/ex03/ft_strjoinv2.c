/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:52:34 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/20 15:08:50 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
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
	char	*s;
	int		i;
	int		j;
	int		k;

	s = (char *)malloc(sizeof(char) * ft_len(size, strs, sep));
	if (size == 0)
	{
		s == NULL;
		return (s);
	}
	if (s == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			s[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			s[k++] = sep[j++];
		i++;
	}
	s[k] = '\0';
	return (s);
}
