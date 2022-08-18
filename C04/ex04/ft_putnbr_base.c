/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:53:29 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/17 11:07:21 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//added spacing in check base
//ft_putnbr_base(2) in the max value
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *str)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] == '-' || str[counter] == '+' ||)
			return (1);
		else if (str[counter] <= 32 || str[counter] == 127)
			return (1);
		while (i < counter)
		{
			if (str[i] == str[counter])
				return (1);
			i++;
		}
		i = 0;
		counter++;
	}
	if (counter <= 1)
		return (1);
	return (0);
}

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_base(base))
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(2);
		ft_putnbr_base(147483648, base);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
		ft_putnbr_base(nbr, base);
	}	
	else if (nbr < len(base))
		ft_putchar(base[nbr % len(base)]);
	else
	{
		ft_putnbr_base(nbr / len(base), base);
		ft_putnbr_base(nbr % len(base), base);
	}	
}
