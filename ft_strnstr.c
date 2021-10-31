#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;
	size_t	j;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		if (j == little_len)
			return ((char *)big + i - little_len + 1);
		i++;
	}
	return (NULL);
}
