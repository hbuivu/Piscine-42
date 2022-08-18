/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:52:48 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/04 10:30:21 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	if (n < 0)
	{
		sign = 'N';
	}
	else
	{
		sign = 'P';
	}
	write (1, &sign, 1);
}
//int	main(void)
//{
//	int	n;
//
//	n = 5;
//	ft_is_negative(n);
//}
