/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:45:54 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/08 10:15:50 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_lower(char c)
{
	if (c < 97 || c > 122)
		return (0);
	return (1);
}

char	*ft_strupcase(char *str)
{
	char	*ret_ptr;

	ret_ptr = str;
	if (str == 0)
		return (0);
	while (*str != '\0')
	{
		if (is_lower(*str) > 0)
		{
			*str -= 32;
			str++;
		}
		else
			str++;
	}	
	return (ret_ptr);
}
