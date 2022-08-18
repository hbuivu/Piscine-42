#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
   	unsigned int i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

// int main (void)
// {
//     char *src = "Hello";
//     char dest[5];
//     ft_strncpy(dest, src, 4);
//     return 0;
// }
int main(void) {
	
	// char src_string[] = "Source";
	// char dest_string[20];
	// char *ret_string = "Return";
	// unsigned int len  = 2;

	// printf("return = %s | dest = %s | src = %s | n = %u\n",ret_string,dest_string,src_string,len);
	// printf("Calling return =  ft_strncpy(dest_string,src_string,n);\n");
	// printf("return = %s | dest = %s | src = %s | n = %u\n", ft_strncpy(dest_string,src_string,len),dest_string,src_string,len);

    char *src = "howareyou";
    char *dest = "abc";
    ft_strncpy(dest, src, 3);
    printf("%s", dest);

	return (0);
}
