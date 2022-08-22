#include <stdio.h>

int main(void)
{
	char *av[5] = {"dog", "cat", "mouse", "moose", "meerkat"};
	int ac = 5;

	t_stock_str *ptr = ft_strs_to_tab(ac, av);
	int i = 0;
	while (ptr[i].str != 0)
	{
		printf("%s\n", ptr[i].str);
		i++;
	}
}
