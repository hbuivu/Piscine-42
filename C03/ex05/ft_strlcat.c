/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:32:49 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/13 13:23:27 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len(char *str)
{
	unsigned int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = str_len(dest);
	if (size <= len)
	{
		return (size + len);
	}
	while ((size > len + 1) && src[i])
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (len + str_len(&(src[i])));
}
