/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 08:58:51 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/17 08:16:13 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	*ptr;
	int	*ret_ptr;

	n = max - min;
	if (n <= 0)
		return (NULL);
	ptr = malloc(sizeof(int) * n);
	ret_ptr = ptr;
	if (ptr)
	{
		while (n > 0)
		{
			*ptr = min;
			ptr++;
			min++;
			n--;
		}
		return (ret_ptr);
	}
	else
		exit (1);
}
