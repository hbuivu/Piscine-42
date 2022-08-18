/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:45:54 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/08 10:17:59 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_upper(char c)
{
	if (c < 65 || c > 90)
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	char	*ret_ptr;

	ret_ptr = str;
	if (str == 0)
		return (0);
	while (*str != '\0')
	{
		if (is_upper(*str))
		{
			*str += 32;
			str++;
		}
		else
			str++;
	}	
	return (ret_ptr);
}
