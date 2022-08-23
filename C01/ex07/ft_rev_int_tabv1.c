/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:38:13 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/07 16:18:12 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i;

	i = 0;
	size--;
	
	while (i <= size /2)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}	
}

int main(void)
{
	int a[] = {5, 8, 10, 14, 6, 3};
	int size = 7;
	int *tab = a;
	ft_rev_int_tab(tab, size);

	for (int i = 0; i < size; i++)
		printf("%i\n", a[i]);
}
