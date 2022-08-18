#include <stdio.h>
int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char *str1 = "abcdefghai312H-/.3";
	char *str2 = "ABCJFDAKFJAD";
	char *str3 = "";
	
	printf("%i\n", ft_str_is_uppercase(str1));
	printf("%i\n", ft_str_is_uppercase(str2));
	printf("%i\n", ft_str_is_uppercase(str3));
}

