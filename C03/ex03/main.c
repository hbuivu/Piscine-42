#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char dest[30] = "Apples";
	char *src = "And Bananas";

	char desti[30] = "Apples";
	char *srci = "And Bananas";

	int n = 5;

	printf("dest: %s\n", dest);
	printf("src: %s \n", src);
	printf("strcat: %s \n", strncat(dest, src, 5));
	printf("ftstrncat: %s \n", ft_strncat(desti, srci, 5));
}
