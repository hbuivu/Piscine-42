#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char *str = "bag cat hat";
	char *find = "cat";

	printf("%s \n", ft_strstr(str, find));
	printf("%s \n", strstr(str, find));

}
