#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*src2;

	src2 = (char *)src;
	i = 0;
	while (i < n)
	{
		if (src2[i] == c)
		{
			ft_memset(dest + i, src2[i], 1);
			return (dest + i + 1);
		}
		ft_memset(dest + i, src2[i], 1);
		i++;
	}
	return (NULL);
}
