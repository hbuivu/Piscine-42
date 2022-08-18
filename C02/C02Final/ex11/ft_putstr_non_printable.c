/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:41:06 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/09 21:56:36 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_nonprintable(char c)
{
	if (c > 31)
		return (0);
	return (1);
}

void	char_to_hex(char c)
{
	char	hex[3];

	hex[0] = '\\';
	hex[1] = "0123456789abcdef"[(c / 16)];
	hex[2] = "0123456789abcdef"[(c % 16)];
	write(1, hex, 3);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	size;

	while (*str != '\0')
	{
		if (is_nonprintable(*str))
			char_to_hex(*str);
		else
			write(1, str, 1);
		str++;
	}
	if (*str == '\0')
	{
		char_to_hex('\0');
	}
}
