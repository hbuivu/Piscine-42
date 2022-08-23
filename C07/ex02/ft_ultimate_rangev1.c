/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 09:22:13 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/16 17:57:40 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	n;
	int	*rn;

	i = 0;
	n = max - min;
	rn = malloc(sizeof(int) * n);
	if (n <= 0)
		return (0);
	if (rn)
	{
		while (i < n)
		{	
			rn[i] = min;
			i++;
			min++;
		}
		*range = rn;
		return (n);
	}
	else
		exit(-1);
}
