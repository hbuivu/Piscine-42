/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 08:59:08 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/09 21:49:55 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ret_ptr;

	ret_ptr = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		n--;
	}
	return (ret_ptr);
}
