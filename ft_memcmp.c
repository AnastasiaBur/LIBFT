#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*fir;
	const unsigned char	*sec;
	unsigned int		i;

	i = 0;
	fir = s1;
	sec = s2;
	while (fir[i] != '\0' && sec[i] != '\0' && fir[i] == sec[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)fir[i] - (unsigned char)sec[i]);
}