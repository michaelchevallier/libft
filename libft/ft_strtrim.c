/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:35:16 by mchevall          #+#    #+#             */
/*   Updated: 2015/12/02 19:38:37 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char		*str;
	size_t		start;
	int			len;
	size_t		slen;
	size_t		i;

	start = 0;
	len = 0;
	slen = ft_strlen(s) - 1;
	i = 0;
	if (s == NULL)
		return (NULL);
	while(s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while((s[slen - i] == ' ' || s[slen - i] == '\n' || s[slen - i] == '\t') && s[len - i])
		i++;
	if (start == 0 && slen == ft_strlen(s))
		return(ft_strdup(s));
	len = slen - start - i;
	if (len < 0)
		return (ft_strnew(1));
	str = ft_strsub(s, start, len);
	str[len] = '\0';
	return (str);
}

int main ()
{
	printf("%s",ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t"));
	return (0);
}
