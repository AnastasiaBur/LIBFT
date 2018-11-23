#include <stdio.h>

char	*ft_strmap(char const *s, char (*f)(char));

char	ft_change(char s)
{
	s = s - 32;
	return(s);
}

int		main(void)
{
	char str[10] = "hello";
	printf("%s", ft_strmap(str, ft_change));
	return (0);
}