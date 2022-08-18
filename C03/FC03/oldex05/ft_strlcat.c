/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:32:49 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/11 14:42:51 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	if (*dest == '\0' || *src == '\0')
		return (size);
	while (*dest != '\0')
	{
		dest++;
		count++;
	}
	if (size > count)
	{
		while (*src != '\0')
		{
			if (size - count > 1)
			{
				*dest = *src;
				dest++;
			}
			count++;
			src++;
		}
		*dest = '\0';
		return (count);
	}
	return (count + 1 + size);
}
