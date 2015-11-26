/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:57:16 by mchevall          #+#    #+#             */
/*   Updated: 2015/11/26 15:33:50 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isalnum(int c)
{
	int		alnum;

	alnum = 0;
	if (ft_isalpha(c) > 0 || ft_isdigit(c) > 0)
		alnum = c;
	return (alnum);
}
