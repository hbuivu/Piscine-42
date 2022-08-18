#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void)
{
	int *ptr = (ft_range(-5, 10));
	int i = 0;
	while (i < 15)
	{
		printf("%i\n", ptr[i]);
		i++;
	}
}
