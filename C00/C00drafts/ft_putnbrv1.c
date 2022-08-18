/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:07:54 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/03 23:13:58 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int nb)
{
	int		counter;
	int		r;
	char 	num_array[11];

	counter = 0;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar(2);
		ft_putnbr(147483648);
	}	
	else if (nb == 2147483647)
	{
		ft_putchar(2);
		ft_putnbr(147483647);
	}	
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	while (nb != 0)
	{
		r = nb % 10;
		nb /= 10;
		num_array[counter] = r + '0';
		counter++;
	}
	while (counter >= 0)
	{
		write(1, &num_array[counter], 1);
		counter--;
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
}
