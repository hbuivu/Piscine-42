/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 09:22:13 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/17 08:39:57 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	*ptr;
	int	*ret_ptr;

	n = max - min;
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
		return (NULL);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;

	n = max - min;
	if (n <= 0)
	{
		*range = NULL;
		return (0);
	}
	else
		*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (n);
}
