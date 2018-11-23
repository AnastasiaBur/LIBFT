#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	ft_change(unsigned int i, char s)
{
	printf("\nsymbol number %2u:   %c -> %c", i, s, s - 32);
	return(s - 32);
}

int		main(void)
{
	char str[10] = "hello";
	printf("\n%s", ft_strmapi(str, ft_change));
	return (0);
}