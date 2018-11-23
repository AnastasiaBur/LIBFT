#include <stdio.h>

void	ft_striter(char *s, void (*f)(char *));

void	ft_change(char *s)
{
	*s = *s - 32;
}

int		main(void)
{
	char str[10] = "hello";
	ft_striter(str, ft_change);
	printf("%s", str);
	return (0);
}