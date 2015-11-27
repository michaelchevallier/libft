/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:33:21 by mchevall          #+#    #+#             */
/*   Updated: 2015/11/24 17:06:52 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		srclen;
	size_t		i;

	srclen = ft_strlen(src);
	i = 0;
	if (srclen < n)
	{
		while (++i < srclen + 1)
			dst[i - 1] = src[i - 1];
		while (i++ < n + 2)
			dst[i - 2] = '\0';
	}
	else
	{
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst);
}
