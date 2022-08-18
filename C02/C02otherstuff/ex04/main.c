#include <stdio.h>
int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char *str1 = "abcdefghai312H-/.3";
	char *str2 = "abcde";
	char *str3 = "";
	
	printf("%i\n", ft_str_is_lowercase(str1));
	printf("%i\n", ft_str_is_lowercase(str2));
	printf("%i\n", ft_str_is_lowercase(str3));
}
