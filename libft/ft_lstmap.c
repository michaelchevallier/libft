/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 18:08:26 by mchevall          #+#    #+#             */
/*   Updated: 2015/12/08 18:51:11 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new = f(lst);
	result = new;
	while (lst->next)
	{
		new->next = (t_list *)malloc(sizeof(t_list));
		if (!new->next)
			return (NULL);
		lst = lst->next;
		new->next = f(lst);
		new = new->next;
	}
	return (result);
}
