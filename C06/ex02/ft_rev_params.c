/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 08:51:56 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/15 08:58:06 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;
	int	j;

	index = argc - 1;
	j = 0;
	while (index > 0)
	{
		while (argv[index][j] != '\0')
		{
			write(1, &argv[index][j], 1);
			j++;
		}
		j = 0;
		index--;
		write(1, "\n", 1);
	}
}
