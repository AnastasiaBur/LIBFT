#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

void	ft_print_result(char *s)
{
	int		len;

	len = 0;
	while (s[len])
	{
		if (s[len] >= 'a' && s[len] <= 'z')
			s[len] -= 32;
		len++;
	}
	write(1, s, len);
	write(1, "\n", 1);
}

int		main(void)
{
	int		arg = 10;

		ft_print_result(ft_itoa(0));
		ft_print_result(ft_itoa(arg));
		ft_print_result(ft_itoa(-arg));
		ft_print_result(ft_itoa(arg + 1));
		ft_print_result(ft_itoa(-(arg + 1)));
		ft_print_result(ft_itoa(8124));
		ft_print_result(ft_itoa(-9874));
		ft_print_result(ft_itoa(543000));
		ft_print_result(ft_itoa(-2147483648LL));
		ft_print_result(ft_itoa(2147483647));
	return (0);
}
