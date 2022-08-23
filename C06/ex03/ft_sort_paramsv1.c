/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 08:58:53 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/15 13:16:36 by hbui-vu          ###   ########.fr       */
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

void	ft_swap(char *a, char *b)
{
	char *tmp;

	tmp = a;
	*a = *b;
	*b = *tmp;
}

int	main(int argc, char **argv)
{
	int	i;
	int j;
	char *tmp;

	i = 1;
	j = 1;
	int k = argc - 1;
	while (i < argc)
	{
		while (j < k)
		{
			printf("j: %i argv[j]: %s argv[j+1]:%s\n", j, argv[j], argv[j+1]);
			printf("*argv:[j] %c **argv[j+1]: %c\n", **argv[j], *argv[j+1]);
			if (*argv[j] > *argv[j+1])
			{
				printf("test\n");
				//ft_swap(argv[j], argv[j+1]);
			}			
			j++;
		}
		i++;
		j = 1;
		k--;
	}
}
