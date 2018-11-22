#include <stdio.h>

void	ft_strclr(char *s);

int		main(void)
{
	char str[19] = "Hello!";
	printf("original: %s", str);
	ft_strclr(str);
	printf("\nnew: %s", str);
	return (0);

}