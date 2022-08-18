/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:20:44 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/10 16:13:34 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_low(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	else
		return (1);
}

int	is_up(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	else
		return (1);
}

int	is_alpha(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if ((c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (is_low(str[i]))
	{
		str[i] -= 32;
	}
	i++;
	while (str[i] != '\0')
	{
		if (is_low(str[i]) && !(is_alpha(str[i - 1])))
		{
			str[i] -= 32;
		}
		else if (is_up(str[i]) && is_alpha(str[i - 1]))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
