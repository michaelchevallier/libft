/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 10:46:16 by mchevall          #+#    #+#             */
/*   Updated: 2015/12/07 18:50:00 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_wordsize(char const *s, char c, size_t pos)
{
	size_t		i;
	size_t		j;

	if (!s || !c)
		return (0);
	i = 0;
	j = 0;
	while (s[pos + i] == c && s)
		i++;
	while (s[pos + i + j] != c && s)
		j++;
	return (j);
}

static size_t		ft_countword(char const *s, char c)
{
	size_t		i;
	size_t		nbword;

	i = 0;
	nbword = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		nbword++;
	}
	if (s[i - 1] == c)
		nbword--;
	return (nbword);
}

static size_t		ft_startword(char const *s, char c, size_t pos)
{
	while (s[pos] == c && s)
		pos++;
	return (pos--);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t		pos;
	size_t		i;
	size_t		j;
	char		**str;

	pos = 0;
	i = 0;
	j = 0;
	if (!s || !c)
		return (NULL);
	str = (char **)ft_memalloc(sizeof(char *) * ft_countword(s, c) + 1);
	while (i < ft_countword(s, c))
	{
		pos = ft_startword(s, c, pos);
		str[i] = (char *)ft_memalloc(sizeof(char) * ft_wordsize(s, c, pos) + 1);
		while (j < ft_wordsize(s, c, pos))
		{
			str[i][j] = s[pos + j];
			j++;
		}
		pos = pos + j;
		j = 0;
		i++;
	}
	return (str);
}
