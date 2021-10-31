#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
	if (ptr[i] == c)
		return (&ptr[i]);
	return (NULL);
}
