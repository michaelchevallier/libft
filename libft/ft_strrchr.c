/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:47:50 by mchevall          #+#    #+#             */
/*   Updated: 2015/11/25 16:06:06 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	comp;
	int		len;

	comp = c;
	len = ft_strlen(s) + 1;
	while (s[len] != comp && len >= 0)
		len--;
	if (s[len] == comp)
		return (char *)(&s[len]);
	else
		return (NULL);
}
