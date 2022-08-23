/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abinmahf <abinmahf@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:30:09 by abinmahf          #+#    #+#             */
/*   Updated: 2022/08/07 12:06:44 by abinmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	str_to_int(const char *str)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while (str[i] != '\0')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	int	m;

	m = 2147483647;
	if (argc != 3)
		return (0);
	else if (str_to_int(argv[1]) <= 0 || str_to_int(argv[2]) <= 0)
		return (0);
	else if (str_to_int(argv[1]) > m || str_to_int(argv[2]) > m)
		return (0);
	else
		rush(str_to_int(argv[1]), str_to_int(argv[2]));
	return (0);
}
