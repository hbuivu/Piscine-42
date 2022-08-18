#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char dest[30] = "";
	char *src = "And Bananas";

	char desti[30] = "";
	char *srci = "And Bananas";

	printf("dest: %s\n", dest);
	printf("src: %s \n", src);
	printf("strcat: %s \n", strcat(dest, src));
	printf("ftstrcat: %s \n", ft_strcat(desti, srci));
}
