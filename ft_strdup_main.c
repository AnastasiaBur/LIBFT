#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *str);

int		main(void)
{
	char *src = "Hello world!";
	printf("standart: %s", strdup(src));
	printf("\nprogram:  %s", ft_strdup(src));
	return (0);
}