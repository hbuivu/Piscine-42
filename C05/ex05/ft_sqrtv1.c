/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:03:52 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/14 14:46:24 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;
	int	num;
	int	total;

	count = 0;
	num = -1;
	total = 0;
	while (total < nb)
	{
		count++;
		num += 2;
		total = total + num;
	}
	if (total == nb)
		return (count);
	else
		return (0);

/*int i;

	i = 0;
	while ((i * i <= nb) && i < nb / 2 && i < 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);*/

}
