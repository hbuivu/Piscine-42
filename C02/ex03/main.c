#include <stdio.h>
int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *str1 = "abcdefghai3123";
	char *str2 = "12234";
	char *str3 = "";
	
	printf("%i\n", ft_str_is_numeric(str1));
	printf("%i\n", ft_str_is_numeric(str2));
	printf("%i\n", ft_str_is_numeric(str3));
}
