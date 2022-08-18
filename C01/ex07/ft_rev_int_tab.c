/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:38:13 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/09 10:28:30 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	size--;
	while (i <= size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}
