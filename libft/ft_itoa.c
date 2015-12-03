/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:22:07 by mchevall          #+#    #+#             */
/*   Updated: 2015/12/03 11:25:18 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_isneg(int n)
{
	int		neg;

	neg = 0;
	if (n < 0)
		neg = 1;
	return (neg);
}

static char		*calc(int n, int i, char *chain)
{
	int		isneg;

	isneg = ft_isneg(n);
	if (isneg == 1)
		n = n * -1;
	while (n > 0)
	{
		chain[i] = ((n % 10 + 48));
		n = n / 10;
		i++;
	}
	if (isneg == 1)
	{
		chain[i] = '-';
		i++;
	}
	chain[i] = '\0';
	ft_strrev(chain);
	return (chain);
}

char			*ft_itoa(int n)
{
	char	*chain;
	int		i;
	int		isneg;

	i = 0;
	isneg = ft_isneg(n);
	chain = (char *)ft_memalloc(sizeof(char *) * 12);
	if (n == -2147483648)
	{
		chain = "-2147483648";
		return (chain);
	}
	if (n == 0)
	{
		chain[i] = 48;
		return (&chain[i]);
	}
	chain = calc(n, i, chain);
	return (chain);
}
