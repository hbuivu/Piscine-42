/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 08:12:29 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/15 08:44:49 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char	**argv)
{
	/*int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
		   write (1, &argv[i][j], 1);
		   j++;
		}	
		j = 0;
		i++;
		write (1, "\n", 1);	
	}
	*/
	/*int	i = 1;
	char *ptr;

	ptr = *argv;

	while (i < argc)
	{
		while (**argv != '\0')
		{
			write(1, *argv, 1);
			argv++;
		}
		i++;
		*argv = ptr;
		write (1, "\n", 1);
	}*/
	printf("%c\n", **argv);
	printf("%s\n", *argv);
	argv++;
	printf("%s\n", *argv);
	
}
