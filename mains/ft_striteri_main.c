#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_change(unsigned int i, char *s)
{
	printf("\nsymbol number %u %c -> ", i, *s);
	*s = *s - 32;
	printf("%c", *s);
}

int		main(void)
{
	char str[10] = "hello";
	ft_striteri(str, ft_change);
	printf("\n%s", str);
	return (0);
}