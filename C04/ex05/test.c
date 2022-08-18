#include <stdio.h>

int	power(int nbr, int x)
{
	if (x != 0)
		return (nbr * power(nbr, x - 1));
	return (1);
}

int indx(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main(void)
{
	char *str = "96";
	char *base = "0123456789abcdef";

	int p;
	int	i;
	int	num;
	int neg;

	p = len(str) - 1;
	//printf("initial p: %i\n", p);
	i = 0;
	num = 0;
	while (str[i])
	{
		//printf("str[i] = %c\n", str[i]);
		if (indx(str[i], base) == len(str))
			return (0);
		//printf("index: %i\n", indx(str[i], base));
		//printf("power: %i\n", power(len(str), p));
		num += indx(str[i], base) * power(len(base), p);
		printf("num: %i\n", num);
		p--;
		i++;
	}

	char *str1 = "abge";
	char *base1 = "0123456789abcdef";

	printf("%i\n", indx(str1[2], base1));
	return (num);
}


