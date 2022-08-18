unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
#include <string.h>
#include <stdio.h>

int main(void)
{
	char s1[10] = "abc";
    char s2[] = "abc";
    printf("%lu\n", strlcat(s1, s2, 3));
    printf("%s\n", s1);

	char ss1[10] = "abc";
    char ss2[] ="abc";
    printf("%d\n", ft_strlcat(ss1, ss2, 3));
    printf("%s\n", ss1);
}
