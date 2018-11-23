#include <stdlib.h>

static int	ft_strlen(char const *str);

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	i = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while(s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

static int	ft_strlen(char const *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}