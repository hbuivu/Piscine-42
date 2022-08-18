/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 08:17:07 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/14 08:35:35 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	else if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
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
	int	i;
	int	base_len;

	neg = 0;
	num = 0;
	i = 0;
	base_len = 0;
	if (check_base(base))
		return (0);
	while (base[base_len])
		base_len++;
	while (str[i] && is_space(str[i]))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] && indx(str[i], base) != base_len)
	{
		num = num * base_len + (indx(str[i], base));
		i++;
	}
	if (neg % 2 != 0)
		num *= -1;
	return (num);
}
