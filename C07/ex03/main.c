#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main (void)
{
	char *strs[4] = {"dog", "cat", "mouse", "thisisareallyreallyreallylongword"};	
	char *sep = "+=";
	char *str = ft_strjoin(4, strs, sep);
	printf("%s\n", str);
}
