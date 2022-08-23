#include <stdio.h>
int	ft_str_is_alpha(char *str);

int	main(void)
{
	char *str1 = "abcdefghaiakljdfka";
	char *str2 = "12jfadkfFjk;ladf";
	char *str3 = "";
	
	printf("%i\n", ft_str_is_alpha(str1));
	printf("%i\n", ft_str_is_alpha(str2));
	printf("%i\n", ft_str_is_alpha(str3));
}
