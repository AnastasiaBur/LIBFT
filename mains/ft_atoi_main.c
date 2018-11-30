#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *c);

int		main(void)
{
	char *a = "";
	printf("%d", ft_atoi(a));
	printf("\n%d", atoi(a));
	return (0);
}
