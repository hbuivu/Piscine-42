/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:33:47 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/09 17:44:23 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	count;

	count = 0;
	while (*src != '\0')
	{
		if (size > 1)
		{
			*dest = *src;
			dest++;
			size--;
		}
		else if (size == 1)
			*dest = '\0';
		count++;
		src++;
	}
	return (count);
}
