#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*src2;

	src2 = (char *)src;
	i = 0;
	while (i < n)
	{
		ft_memset(dest + i, src2[i], 1);
		i++;
	}
	return (dest);
}
