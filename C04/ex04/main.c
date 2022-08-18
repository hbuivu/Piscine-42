#include <unistd.h> 
void	ft_putnbr_base(int nbr, char *base);

int main(void)
{
	int nbr = -12345;
	char *base = "0";

	ft_putnbr_base(nbr, base);
}
