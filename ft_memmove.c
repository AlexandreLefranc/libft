#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst2;
	char	*src2;
	char	*tmp;

	dst2 = (char *)dest;
	src2 = (char *)src;
	tmp = (char *)malloc(sizeof(*tmp) * n);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		tmp[i] = src2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dst2[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dest);
}
