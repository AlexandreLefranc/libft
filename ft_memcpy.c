#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		ft_memset(dest + i, *((char *)src + i), 1);
		i++;
	}
	return (dest);
}
