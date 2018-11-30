#include <string.h>
#include <stdio.h>

char 	*ft_strncpy(char *d, char *s, size_t n);

int		main(void)
{
	char	*src = "Hello world!";
	char	dest[40];

	printf("standart: %s", strncpy(dest, src, 10));
	printf("\nprogram:  %s", ft_strncpy(dest, src, 10));
	return (0);
}
