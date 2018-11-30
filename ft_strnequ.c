#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i > n)
		i++;
	if (s1[i] == s2[i] || n == 0)
		return (1);
	else
		return (0);
}