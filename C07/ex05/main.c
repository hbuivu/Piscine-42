#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str, char *charset);
char *ft_strcpy(char *str, char *charset);

int main(void)
{
	char *str = "dog-cat-mouse---snail";
	char *charset = "-";
	char **array;
	array = ft_split(str, charset);
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", array[i]);
	}
}
