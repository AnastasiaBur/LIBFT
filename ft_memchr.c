#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*arr;
	unsigned int		i;

	i = 0;
	arr = s;
	if(n)
	{
		while (i < n && arr[i] != (unsigned char)c)
			i++;
	}
	if (arr[i] == c)
		return ((void*)(s + i));
	else
		return (NULL);
}