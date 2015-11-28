#include "libft.h"
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if(ptr)
	{
		ft_memset(ptr, '\0', size);
		return(ptr);
	}
	return (NULL);
}
