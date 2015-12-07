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

void		ft_split(char const *s, char c, size_t *start, size_t *wordsz)
{
	size_t		chain;

	chain = 0;
	while (s[*start] == c && s[*start] != '\0')
		*start++;
	chain = *start;
	while (s[*start] != c && s[*start] != '\0')
	{
		*start++;
		*wordsz++;
	}
	*wordsz--;
	//return (&s[chain]);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t		j;
	size_t		i;
	char		**str;
	size_t		*start;
	size_t		*wordsz;

	i = 0;
	j = 0;
	start = (size_t *)ft_memalloc(sizeof(size_t *));
	wordsz = (size_t *)ft_memalloc(sizeof(size_t *));
	*start = &start
	*wordsz = &wordz;
	if(!s || !c)
		return (NULL);


	str = (char **)ft_memalloc(sizeof(char **) * ft_countword(s, c) + 1);
	printf("A\n\n\n\n");
	while (i < ft_countword(s, c))
	{
		ft_split(s[start], c, start, wordsz);
		str[i] = (char *)ft_memalloc(sizeof(char *) * *wordsz + 1);
		printf("%ld\n",wordsz);
		printf("%ld\n",start);
		while (j < *wordsz)
		{
		printf("A\n");
			str[i][j] = s[*start];
			j++;
		}
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

