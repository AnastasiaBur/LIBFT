#include <string.h>
#include <stdio.h>

char	*ft_strnpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	*src = "Hello world!";
	char	dest[40];
	unsigned int n = 18;

	printf("standart: %s", strncpy(dest, src, n));
	printf("\nprogram:  %s", ft_strncpy(dest, src, n));
	return (0);
}
