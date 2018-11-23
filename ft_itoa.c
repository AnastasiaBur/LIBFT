#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	num[15];
	int		i;

	i = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return ("-2147483648");
		else
		{
			num[0] = '-';
			n = -n;
			i++;
		}
	}
	
	
}