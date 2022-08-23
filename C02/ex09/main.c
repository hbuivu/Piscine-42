#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	char str[] = "Salut, CommenT tu /as ? 40Mots: quarante-['deux; cinquZnte+ET+Un";
	printf("%s\n", ft_strcapitalize(str));
}
