#include <stdio.h>
int	ft_str_is_printable(char *str);

int	main(void)
{
	char *str1 = "abcdefghai312H-/.3";
	char *str2 = "ABCJ\nFDAKFJAD";
	char *str3 = "";
	
	printf("%i\n", ft_str_is_printable(str1));
	printf("%i\n", ft_str_is_printable(str2));
	printf("%i\n", ft_str_is_printable(str3));
}

