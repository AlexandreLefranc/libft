#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	ssize_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = ft_strlen(s);
	while (i > -1)
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i--;
	}
	return (NULL);
}
