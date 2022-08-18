#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char *s1 = "cats and dogs";
	char *s2 = "cats and dogs";

	char *s3 = "often";
	char *s4 = "";

	char *s5 = "something";
	char *s6 = "others";

	printf(" %i\n", ft_strcmp(s1, s2));
	printf(" %i\n", ft_strcmp(s3, s4));
	printf(" %i\n", ft_strcmp(s5, s6));

	printf(" %i\n", strcmp(s1, s2));
	printf(" %i\n", strcmp(s3, s4));
	printf(" %i\n", strcmp(s5, s6));
}	
