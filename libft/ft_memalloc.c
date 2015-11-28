#include "libft.h"
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr)
		return(ptr);
	return (NULL);
}
