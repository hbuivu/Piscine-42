/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 08:58:53 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/15 14:16:26 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	print_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		j = 0;
		i++;
		write (1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	j = 1;
	while (i < argc - 1)
	{
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
			j++;
		}
		i++;
		j = 1;
	}
	print_args(argc, argv);
}
