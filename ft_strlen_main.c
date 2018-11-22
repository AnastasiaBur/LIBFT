#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int		main(void)
{
	char *s = "12345";
	printf("standart: %d", strlen(s));
	printf("\nprogram:  %d", ft_strlen(s));
	return (0);
}