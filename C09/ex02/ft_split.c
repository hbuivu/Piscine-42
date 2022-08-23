/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbui-vu <huong.buivu@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:12:12 by hbui-vu           #+#    #+#             */
/*   Updated: 2022/08/23 11:19:23 by hbui-vu          ###   ########.fr       */
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
		if (c == charset[i])
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
	count = 0;
	if (str[i] && !is_sep(str[i], charset))
	{
		count++;
		i++;
	}
	while (str[i])
	{
		if (is_sep(str[i], charset) & !is_sep(str[i + 1], charset))
			count++;
		i++;
	}
	return (count);
}

int	count_chars(char *str, char *charset)
{
	int	i;

	i = 0;
	while (!is_sep(str[i], charset) && str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *str, char *charset)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = malloc(sizeof(char) * (count_chars(str, charset) + 1));
	while (str[i] && !is_sep(str[i], charset))
		ptr[j++] = str[i++];
	ptr[j] = '\0';
	return (ptr);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**array;

	i = -1;
	array = malloc(sizeof(char *) * (1 + count_strs(str, charset)));
	if (array)
	{
		if (str == NULL)
			return (NULL);
		array[count_strs(str, charset)] = NULL;
		while (*str)
		{
			if (!is_sep(*str, charset))
			{
				i++;
				array[i] = ft_strcpy(str, charset);
				str += count_chars(str, charset);
			}
			else
				str++;
		}
		return (array);
	}
	return (NULL);
}

int main(void)
{
    char *str = "rintheobeyondorifro--hishersor";
    char *charset = "";

	//printf("%i\n", count_strs(str, charset)); 
   	
   	//ft_strcpy(str, charset);
	//count_chars(str, charset);

    char **arr = ft_split(str, charset);

    int i = 0;
    while (arr[i] != NULL)
    {   
		printf("%s\n", arr[i]);
        i++;;
    }
	printf("%s\n", arr[i]);
}


