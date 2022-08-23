#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char *src = "brownies";
	char dest[5];
	int n = 5;
	ft_strncpy(dest, src, n);
	printf("%s", dest);
}
