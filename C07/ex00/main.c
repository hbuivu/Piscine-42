#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int main(void)
{
	char *p = ft_strdup("face");
	char *q = strdup("face");
	printf("%s\n", p);
	printf("%s\n", q);
}
