/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 08:58:51 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/20 16:32:27 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	*ptr;

	n = 0;
	if (max <= min)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (0);
	while (min < max)
	{
		ptr[n] = min;
		n++;
		min++;
	}
	return (ptr);
}
