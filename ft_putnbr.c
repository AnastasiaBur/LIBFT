void	ft_putchar(char c);
void	ft_putstr(char *str);

void ft_putnbr(int n)
{
	if (n >= -2147483648 && n <= 2147483647)
	{
		if (n < 0)
		{
			if (n == -2147483648)
				ft_putstr("-2147483648");
			else if (n >= -2147483647)
			{
				ft_putchar('-');
				n = -n;
			}
		}
		else if (n < 10)
			ft_putchar('0' + n);
		else
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
	}
}