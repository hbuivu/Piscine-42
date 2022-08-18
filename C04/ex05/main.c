#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int main(void)
{
	char *str = "  ---+-+5eghi";
	char *base = "0123456789abcdef";

	printf("%i\n", ft_atoi_base(str, base));

}
