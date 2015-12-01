/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:37:09 by mchevall          #+#    #+#             */
/*   Updated: 2015/11/30 14:37:24 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr)
	{
		ft_memset(ptr, '\0', size);
		return (ptr);
	}
	return (NULL);
}
