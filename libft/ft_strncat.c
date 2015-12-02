/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:47:29 by mchevall          #+#    #+#             */
/*   Updated: 2015/12/02 14:19:55 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1)
		return (NULL);
	if (n == 0)
		return (s1);
	while (s2[i] != '\0' && i < n)
	{
		s1[ft_strlen(s1)] = s2[i];
		i++;
	}
	s1[ft_strlen(s1) + 1] = '\0';
	return (s1);
}
