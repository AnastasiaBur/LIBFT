#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	unsigned int	i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	len--;
	if (s < d)
		while ((int)(len) >= 0)
		{
			d[len] = s[len];
			len--;
		}
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}