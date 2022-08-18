/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:24:05 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/18 14:16:07 by hbui-vu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == *charset)
			return (1);
		i++;
	}
	return (0);
}

int	count_strs(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	if (is_sep(str[i], charset))
		count = 0;
	else
		count = 1;
	i++;
	while (str[i])
	{
		if (!(is_sep(str[i], charset) && is_sep(str[i-1], charset)))
			count++;
		i++;	
	}	
	return(count);	
}

int	count_chars(char *str, char *charset)
{
	int	i;

	i = 0;
	while (!(is_sep(str[i], charset)))
		i++;
	return (i);
}

char *ft_strcpy(char *str, char *charset)
{
	int		i;
	char	*ptr;
	char	*ret_ptr;

	i = count_chars(str, charset);
	ptr = malloc(sizeof(char) * i + 1);
	ret_ptr = ptr;
	while (!(is_sep(*str, charset)))
	{
		*ptr = *str;
		str++;
		ptr++;
	}
	*ptr = '\0';
	ptr = ret_ptr;
	return (ret_ptr);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	char **array;
	
	i = -1;
	j = 0;
	array = malloc(1 + count_strs(str, charset) * sizeof(char *));
	if (array)
	{
		while (*str)
		{	
			if (!(is_sep(*str, charset)))
			{
				i++;
				array[i] = ft_strcpy(str, charset);
				j = count_chars(str, charset);
				str += j;
			}
			else
				str++;		
		}
		return (array);
	}
	return (NULL);	
}
