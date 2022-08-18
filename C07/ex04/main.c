#include <stdio.h>
#include <stdlib.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);
long int	ft_atoi_base(char *str, char *base);
void	ft_putnbr_base(long int nbr, char *base, char *output);

int main(void)
{
	char *nbr = "      ++-+-2147483648";
	char *base_from = "0123456789";
	char *base_to = "0123456789";
	
	//long int i = ft_atoi_base(nbr, base_from);
	//printf("%li\n", i);

	char *num = ft_convert_base(nbr, base_from, base_to);
	
	printf("%s\n", num);
}
