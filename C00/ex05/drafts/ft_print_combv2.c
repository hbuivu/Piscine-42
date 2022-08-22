/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:24:02 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/03 11:52:22 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
	char a = '0';
	char b = '1';
	char c = '1';
	char x[2] = ", ";

	while (a < '7')
	{
		if (c < '9')
		{
			c++;
		}
		else if (b < '8')
		{
			b++;
			c = b + 1;
		}
		else 
		{
			a++;
			b = a + 1;
			c = a + 2;
		}
		char num[3] = {a, b, c};
		char space[2] = ", ";
		write (1, &num, 3);
		
		if (a != '7')
		{
			write (1, &space, 2);
		}

	}
}

int main (void)
{
	ft_print_comb();
}
