/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:14:23 by mchevall          #+#    #+#             */
/*   Updated: 2015/11/24 19:11:21 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		s1_len;
	size_t		s2_len;
	size_t		total_len;
	size_t		i;

	s1_len = ft_strlen(dst);
	s2_len = ft_strlen(src);
	total_len = s1_len + s2_len;
	i = 0;
	while (s1_len < total_len + 1 && size < 5)
	{
		dst[s1_len] = src[i];
		s1_len++;
		i++;
	}
	return (dst);
}
