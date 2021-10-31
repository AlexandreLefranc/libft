#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		if (j == needle_len)
			return ((char *)haystack + i - needle_len + 1);
		i++;
	}
	return (NULL);
}
