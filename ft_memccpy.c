#include "libft.h"

void	*ft_memccpy(void *restrict s1, const void *restrict s2, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned int		i;

	i = 0;
	d = s1;
	s = s2;

	if(n)
	{
		while (i < n && s[i] != (unsigned char)c)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (s1);
}