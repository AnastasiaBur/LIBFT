#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*arr;
	i = 0;
	arr = s;
	if (n)
	{
		while (i < n)
		{
			arr[i] = (unsigned char)c;
			i++;
		}
	}
	return (s);
}