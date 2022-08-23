/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abinmahf <abinmahf@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:31:48 by abinmahf          #+#    #+#             */
/*   Updated: 2022/08/07 12:12:24 by abinmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			if (i == 0 && j == 0)
				ft_putchar('A');
			else if ((i == y -1 && j == 0) || (i == 0 && j == x -1))
				ft_putchar('C');
			else if (j == x - 1 && i == y - 1)
				ft_putchar('A');
			else if (j == 0 || j == x -1 || i == 0 || i == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
		j = 0;
	}
}
