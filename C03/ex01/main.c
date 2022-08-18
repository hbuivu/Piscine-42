#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char *s1 = "cats and dogs";
	char *s2 = "cats and dogs";

	char *s3 = "abcde";
	char *s4 = 0;

	char *s5 = "something";
	char *s6 = "others";

	printf(" %i\n", ft_strncmp(s1, s2, 10));
	printf(" %i\n", ft_strncmp(s4, s3, 0));
	printf(" %i\n", ft_strncmp(s5, s6, 3));

	printf("STRNCMP\n");

	printf(" %i\n", strncmp(s1, s2, 10));
	printf(" %i\n", strncmp(s4, s3, 0));
	printf(" %i\n", strncmp(s5, s6, 3));
}	
