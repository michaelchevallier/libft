/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 10:46:16 by mchevall          #+#    #+#             */
/*   Updated: 2015/12/03 15:16:01 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


#include "libft.h"
size_t	ft_chainsize(char const *s, char c)
{
	size_t		i;
	size_t		j;

	if(!s || !c)
		return (0);
	i = 0;
	j = 0;
	while (s[i] == c && s)
		i++;
	while (s[i + j] != c && s)
		j ++;
	return (i + j);

}

static size_t	ft_countword(char const *s, char c)
{
	size_t		i;
	size_t		nbword;

	i = 0;
	nbword = 0;
	while(s[i])
	{
		while(s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		nbword ++;
	}
	if (s[i - 1] == c)
		nbword --;
	return (nbword);
}

const char		*ft_split(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	return (&s[i]);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t		pos;
	size_t		j;
	size_t		i;
	char		**str;
	size_t		len;

	pos = 0;
	i = 0;
	j = 0;
	len = ft_strlen(ft_split(&s[ft_chainsize(&s[i],c)], c));

	if(!s || !c)
		return (NULL);
	str = (char **)ft_memalloc(sizeof(char **) * ft_countword(s, c) + 1);
	while (i < len)
	{
		str[i] = (char *)ft_memalloc(sizeof(char *) *
				ft_strlen(ft_split(&s[ft_chainsize(&s[pos], c)], c) + 1));
		while (j < ft_strlen(ft_split(&s[ft_chainsize(&s[pos], c)], c)))
		{
			str[i][j] = *ft_split(&s[ft_chainsize(&s[pos], c) + j], c);
			j++;
		}
		pos = ft_strlen(ft_split(&s[ft_chainsize(&s[pos + j], c)], c));
		printf("%ld\n",pos);
		j = 0;
		i++;
	}
	return (str);
}


#include <stdio.h>
int main()
{
	int i;
	char **str;

	i = 0;
		str = ft_strsplit("*****Salut****les****enfants****", '*');
	while (i < 3)
	{
		printf("%s\n",str[i]);
		i++;
	}
	return 0;
}

