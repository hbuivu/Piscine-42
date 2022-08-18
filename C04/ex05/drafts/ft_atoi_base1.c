#include <stdio.h>

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	power(int nbr, int x)
{
	if (x != 0)
		return (nbr * power(nbr, x - 1));
	return (1);
}

int len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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

int	check_base(char *str)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] == '-' || str[counter] == '+')
			return (1);
		while (i < counter)
		{
			if (str[i] == str[counter])
				return (1);
			i++;
		}
		i = 0;
		counter++;
	}
	if (counter <= 1)
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	//neg function not complete
	int p;
	int	i;
	int	num;
	int neg;

	p = len(str) - 1;
	i = 0;
	num = 0;
	neg = 0;
	if (check_base(base))
		return (0);
	printf("spaces\n");
	while (str[i] && is_space(str[i]))
		i++;
		printf("%i\n", i);
	printf("signs\n");
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			neg++;
		i++;
		printf("%i\n", i);
	}
	printf("calculations\n");
	while (!(is_space(str[i])) && indx(str[i], base) != len(base) && str[i])
	{
		printf("i: %i\n", i);
		printf("c: %c\n", str[i]);
		printf("indx: %i\n", indx(str[i], base));
		printf("len(base); %i\n", len(base));
		printf("power: %i\n", power(len(base), p));
		num += indx(str[i], base) * power(len(base), p);
		printf("num: %i\n", num);
		p--;
		i++;
	}
	return (num);
}
