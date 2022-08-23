#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char *src = "brownies";
	char dest[9];
	ft_strcpy(dest, src);
	printf("%s", src);
}
