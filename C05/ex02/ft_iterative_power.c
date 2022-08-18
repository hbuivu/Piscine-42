/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:47:32 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/14 17:47:36 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{	
		num = num * nb;
		power--;
	}
	return (num);
}
