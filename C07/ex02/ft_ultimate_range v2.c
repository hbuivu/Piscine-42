/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 09:22:13 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/20 16:56:31 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{	
	int	n;
	int	*a;

	n = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	a = (int *)malloc(sizeof(int) * (max - min));
	if (a == NULL)
		return (-1);
	while (min < max)
	{
		a[n] = min;
		min++;
		n++;
	}
	*range = a;
	return (max - min);
}
