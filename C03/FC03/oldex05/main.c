unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
#include <string.h>
#include <stdio.h>

int main(void)
{
	char s1[7] = "apples";
    char s2[] = "abc";
    printf("%lu\n", strlcat(s1, s2, 10));
    printf("%s\n", s1);

	char ss1[15] = "apples";
    char ss2[] ="abc";
    printf("%d\n", ft_strlcat(ss1, ss2, 4));
    printf("%s\n", ss1);
}
