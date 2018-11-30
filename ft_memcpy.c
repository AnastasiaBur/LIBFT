#include "libft.h"

void	*ft_memcpy(void *restrict s1, const void *restrict s2, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned int		i;

	i = 0;
	d = s1;
	s = s2;

	if(n)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (s1);
}