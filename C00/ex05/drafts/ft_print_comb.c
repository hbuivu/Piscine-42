/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:11:00 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/03 09:55:53 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_print_comb(void)
{
  for (char i = '0'; i <= '7'; i++)
    {
        for (char j = '2'; j <= '9'; j++)
        {
            if (j >= i + 2)
            {
                char n[4] = {i, i+1, j};
                write (1, &n, 4);

				if (i != '7')
				{
					char x[3] = ", ";
					write(1, &x, 3);
				}
            }
        }
    }
}


int main (void)
{
	ft_print_comb();
}

