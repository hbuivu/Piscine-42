/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 08:17:07 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/17 11:10:27 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

int	ft_atoi_base(char *str, char *base)
{
	int	neg;
	int	num;

	neg = 0;
	num = 0;
	if (check_base(base))
		return (0);
	while (*str && (*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			neg++;
		str++;
	}
	while (*str && indx(*str, base) < len(base))
	{
		num = num * len(base) + (indx(*str, base));
		str++;
	}
	if (neg % 2 != 0)
		num *= -1;
	return (num);
}

//make sure it displays 0;
