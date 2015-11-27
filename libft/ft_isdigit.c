/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:49:22 by mchevall          #+#    #+#             */
/*   Updated: 2015/11/26 15:33:05 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isdigit(int c)
{
	int		digit;

	digit = 0;
	if (c >= '0' && c <= '9')
		digit = c;
	return (digit);
}