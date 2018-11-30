#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*arr;
	unsigned int	i;

	i = 0;
	arr = s;
	if(!n)
		return ;
	while (i < n)
	{
		arr[i] = '\0';
		i++;
	}
}