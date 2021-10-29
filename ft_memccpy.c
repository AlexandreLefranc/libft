#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*((char *)src + i) == c)
		{
			ft_memset(dest + i, *((char *)src + i), 1);
			return (dest + i);
		}
		ft_memset(dest + i, *((char *)src + i), 1);
		i++;
	}
	return (NULL);
}
