#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int *arr;
	int j = ft_ultimate_range(&arr, -5, 10);
	int i = 0;
	while (i < 15)
	{
		printf("%i\n", arr[i]);
		i++;
	}
}


