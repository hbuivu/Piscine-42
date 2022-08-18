/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:03:52 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/14 21:45:03 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	mid;
	int	min;
	int	max;

	min = 0;
	max = 46340;
	if (nb <= 0)
		return (0);
	while (min <= max)
	{
		mid = (min + max) / 2;
		if (nb < (mid * mid))
			max = mid - 1;
		else if (nb > (mid * mid))
			min = mid + 1;
		else
			return (mid);
	}
	return (0);
}
