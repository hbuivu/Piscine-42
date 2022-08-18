/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:41:06 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/10 17:16:11 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	char_to_hex(char c)
{
	char	hex[3];
	char	*base;

	base = "0123456789abcdef";
	hex[0] = '\\';
	hex[1] = base[(c / 16)];
	hex[2] = base[(c % 16)];
	write(1, hex, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
			char_to_hex(*str);
		else
			write(1, str, 1);
		str++;
	}
}
