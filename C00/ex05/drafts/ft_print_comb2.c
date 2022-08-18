/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:30:29 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/03 09:55:14 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	for (int i = 0; i < 99; i++)
    {
        for (int j = 1; j <= 99; j++)
        {
            if (j >= i + 1)
            {
                printf("%02d %02d", i, j);
				if (i != 98)
				{
					printf(", ");
				}
            }
        }
    }
}

int main() 
{
    ft_print_comb2();   
}
