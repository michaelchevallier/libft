/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 14:23:33 by mchevall          #+#    #+#             */
/*   Updated: 2016/02/02 14:23:36 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	if (!s || !c)
		return (NULL);
	tab = (char **)ft_memalloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_countwords(s, c))
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			tab[j] = ft_strsub(&s[i], 0, ft_lenwords(s, c, (j + 1)));
			i += (ft_lenwords(s, c, (j + 1)) + 1);
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}
