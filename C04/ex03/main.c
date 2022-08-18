#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);
int main(void)
{
	char *s1 = "     ++-+--+-1234ab56";
	char *s2 = "abcde12345";
	char *s3 = "    12345";
	char *s4 = "";
	char *s5 = "--+--+--+--+---++12345";
	char *s6 = "   --+-abc123";

	printf("%i\n", ft_atoi(s1));
	printf("%i\n", ft_atoi(s2));
	printf("%i\n", ft_atoi(s3));
	printf("%i\n", ft_atoi(s4));
	printf("%i\n", ft_atoi(s5));
	printf("%i\n", ft_atoi(s6));

	printf("%i\n", atoi(s1));
	printf("%i\n", atoi(s2));
	printf("%i\n", atoi(s3));
	printf("%i\n", atoi(s4));
	printf("%i\n", atoi(s5));
	printf("%i\n", atoi(s6));
}
