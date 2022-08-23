#include <stdio.h>

int main(void)
{
    char *str = "rintheobeyondorifro--hishersor";
    char *charset = "or";

    ft_strcpy(str, charset);

    char **arr = ft_split(str, charset);

    int i = 0;
    while (arr[i] != NULL)
    {
        printf("%i: %s\n", i, arr[i]);
        i++;
    }
	printf("%s\n", arr[i]);
}

