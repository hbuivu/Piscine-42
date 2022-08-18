/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:20:44 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/08 11:24:35 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_low(char c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}

int	is_up(char c)
{
	if (c < 65 || c > 90)
		return (0);
	else
		return (1);
}

int	is_sym(char c)
{
	if (c < 32 || (c > 47 && c < 58))
		return (0);
	else if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	if (is_low(str[i]))
	{
		str[i] -= 32;
		i++;
	}
	else
		i++;
	while (str[i] != '\0')
	{
		if (is_sym(str[i - 1]) && is_low(str[i]))
		{
			str[i] -= 32;
		}
		else if (is_up(str[i]))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
