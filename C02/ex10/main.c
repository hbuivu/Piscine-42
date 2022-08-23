#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char src[] = "abcdefgh";
	char dest[8];
	int size = 5;
	int x;

	x = ft_strlcpy(dest, src, size);
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %i\n", x);
}
