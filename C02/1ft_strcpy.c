#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
char    *ft_strcpy(char *dest, char *src)
{
    //return null if there is no memory allocated to destination
    // if (dest == NULL)
    //     return NULL;
    //copy src string including null to dest
    //returns copy of the string

    int len = ft_strlen(src);
    int i = 0;
    while (i < len)
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    return (dest);

    // char *ptr = dest;
    // while (*src != '\0')
    // {
    //     *dest = *src;
    //     dest++;
    //     src++;
    // }
    // *dest = '\0';
    // return ptr;
}

int main(void) {
	
	char src_string[] = "Source";
	char dest_string[] = "Destination";
	char *ret_string = "Return";
	unsigned int len  = 7;

	printf("return = %s | dest = %s | src = %s | n = %u\n",ret_string,dest_string,src_string,len);
	printf("Calling return =  ft_strncpy(dest_string,src_string,n);\n");
	printf("return = %s | dest = %s | src = %s | n = %u\n", ft_strncpy(dest_string,src_string,len),dest_string,src_string,len);

	return (0);
}