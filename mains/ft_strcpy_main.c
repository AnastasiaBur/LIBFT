#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *src = "For God's sake";
	char dest[20];

	printf("standart: %s", strcpy(dest, src));
	printf("\nprogram:  %s", ft_strcpy(dest, src));
	return (0);
}