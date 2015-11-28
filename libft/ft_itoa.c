#include "libft.h"
#include <stdlib.h>
#include <stdio.h>


static int		ft_isneg(int n)
{
	int neg;

	neg = 0;
	if (n < 0)
		neg = 1;
	return (neg);
}

static char		*calc(int n, int i, char *chain)
{
	int		isneg;
	char	*result;
	int		j;

	isneg = ft_isneg(n);
	result = (char *)ft_memalloc(12);
	j = 0;
	if (isneg == 1)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		chain[i] = ((n % 10 + 48));
		n = n / 10;
		i++;
	}
	while (i >= 0)
	{
		result[j] = chain [i];
		i--;
		j++;
	}
	return(&result[i + 2]);
}

char			*ft_itoa(int n)
{
	char	*chain;
	int		i;
	int		isneg;

	i = 0;
	isneg = ft_isneg(n);
	chain = (char *)ft_memalloc(12);
	if (n == -2147483648)
		{
			chain = "-2147483648";
			return(chain);
		}
	if (n == 0)
	{
		chain[i] = 48;
		return(&chain[i]);
	}
	chain = calc(n, i, chain);
	while (chain[i] == '0')
		i++;
	if (isneg == 1)
		chain[i - 1] = '-';
	return((isneg == 1) ? &chain[i - 1] : chain);
}
