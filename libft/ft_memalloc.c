#include "libft.h"
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr)
	{
		ft_memset(ptr, 0, size);
		return(ptr);
	}
	return (NULL);
}
