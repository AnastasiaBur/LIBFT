#include <libft.h>

static size_t	get_len(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			l;
	unsigned int	c;

	l = get_len(n);
	c = n;
	if (n < 0)
	{
		c = -n;
		l++;
	}
	if (!(str = ft_strnew(l)))
		return (NULL);
	l--;
	str[l] = c % 10 + '0';
	l--;
	while (c /= 10)
	{
		str[l] = c % 10 + '0';
		l--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}