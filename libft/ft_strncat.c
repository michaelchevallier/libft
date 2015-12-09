/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:47:29 by mchevall          #+#    #+#             */
/*   Updated: 2015/12/09 16:48:21 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (!s1)
		return (NULL);
	j = ft_strlen(s1);
	if (n == 0)
		return (s1);
	while (s2[i] != '\0' && i < n)
	{
		s1[ft_strlen(s1)] = s2[i];
		i++;
	}
	s1[j + i] = '\0';
	return (s1);
}
