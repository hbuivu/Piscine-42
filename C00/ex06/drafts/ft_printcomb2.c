/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcomb2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:56:59 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/03 15:45:43 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	char a = '0';
	char b = '0';
	char x = '0'; 
	char y = '0';

	while (a <= '9')
	{
		if (y < '9')
		{
			y++;
		}
		else if (x < '9')
		{
			y = '0';
			x ++;
		}
		else if (b < '9')
		{
			b++;
			x = '0';
			y = '0';
		}
		else 
		{
			a++;
			b = '0';
			x = '0';
			y = '0';
		}

		char num [5] = {a, b, ' ', x, y};
		char space [2] = ", "; 

		if (a == '9' && b == '8' && x == '9' && y == '9')
		{
			write (1, &num, 5);
		}
		else if (x > a) 
		{
			write (1, &num, 5);
			write (1, &space, 2);
		}
		else if (x == a)
		{
			if (y > b)
			{
				write (1, &num, 5);
				write (1, &space, 2);
			}
		}
	}

}

int main (void)
{
	ft_print_comb2();
}

