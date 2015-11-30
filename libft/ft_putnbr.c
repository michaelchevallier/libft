#include "libft.h"

void		ft_putnbr(int n)
{
	int		temp;

	temp = 0;
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 0)
	{
		temp = n / 10;
		ft_putnbr(temp);
		ft_putchar(n % 10 + 48);
		n = temp;
	}
}
