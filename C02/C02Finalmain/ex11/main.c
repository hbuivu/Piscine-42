#include <unistd.h>
#include <stdio.h>
#include "../ex11/ft_putstr_non_printable.c"


int main(void) {
	
	char *str = "Coucou\ntu vas bien ?";
	printf("\nString = %s \n",str);
	printf("Calling ft_putstr_non_printable(string);\n");
	ft_putstr_non_printable(str);
	printf("String = %s \n\n",str);

	return (0);
}

