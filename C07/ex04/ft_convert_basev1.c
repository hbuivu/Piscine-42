/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:14:30 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/18 09:55:43 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] == '-' || str[counter] == '+')
			return (1);
		else if (str[counter] == 127 || str[counter] <= 32)
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

int	intlen(int long nb, char *base)
{
	int	count;

	if (nb <= 0)
		count = 1;
	else
		count = 0;
	while (nb != 0)
	{
		nb /= ft_len(base);
		count++;
	}
	return (count + 1);
}

int	indx(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (i);
}

long int	ft_atoi_base(char *str, char *base)
{
	int				neg;
	long int		num;

	neg = 0;
	num = 0;
	while (*str && (*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			neg++;
		str++;
	}
	while (*str && indx(*str, base) < ft_len(base))
	{
		num = num * ft_len(base) + (indx(*str, base));
		str++;
	}
	if (neg % 2 != 0)
		num *= -1;
	return (num);
}

void	ft_putnbr_base(long int n, char *base_to, char *num)
{
	int	len;

	len = intlen(n, base_to) - 1;
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}
	num[len] = '\0';
	len--;
	if (n == 0)
		num[len] = base_to[0];
	while (n > 0)
	{
		num[len] = base_to[n % ft_len(base_to)];
		n = n / ft_len(base_to);
		len--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	i;
	char		*num;
	int			len;			

	if (check_base(base_from) || check_base(base_to))
		return (NULL);
	i = ft_atoi_base(nbr, base_from);
	if (i > 2147483647 || i < -2147483648)
		return (NULL);
	num = malloc(sizeof(char) * intlen(i, base_to));
	if (num)
	{	
		ft_putnbr_base(i, base_to, num);
		return (num);
	}
	return (NULL);
}
