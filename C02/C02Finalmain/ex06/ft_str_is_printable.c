/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:16:08 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/08 22:03:04 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (str == 0)
		return (1);
	while (*str != '\0')
	{
		if (*str < 32)
			return (0);
		else
			str++;
	}
	return (1);
}
