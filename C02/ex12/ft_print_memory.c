/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:59:37 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/08 23:59:53 by hbui-vu          ###   ########.fr       */
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
	char	*alpha;
	char	hex[2];

	alpha = "0123456789abcdef";
	hex[0] = alpha[(c / 16)];
	hex[1] = alpha[(c % 16)];
	write(1, hex, 2);
}

void	ft_putstr_non_printable(char *str)
{
	if (str == 0)
		return;
	while (*str != '\0')
	{
		if (is_nonprintable(*str))
			write(1, ".", 1);
		else
			write(1, str, 1);
		str++;
	}
}

char	*sub_str(char *dest, char *src, int beg, int n)
{
	while (n > 0)
	{
		*dest = *(src + beg);
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (dest);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*s;
	int		i;
	int		j;
	char	dest[17];

	s = addr;
	j = 0;

	if (size == 0)
		return (0);
	while (size > 0)
	{
		i = 0;
		while (i < 16)
		{
			if (s[j] != '\0')
			{
				char_to_hex(s[j]);
				if (i % 2 != 0)
					write(1, " ", 1);
			}
			else
			{
				s[j] = ' ';
			}	
			size--;
		}
		//ft_putstr_non_printable(sub_str(dest, s, i-16, 16));
		write(1, "\n", 1);
	}
	return (addr);
}                                                                                                           
