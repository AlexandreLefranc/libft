#include "libft.h"

size_t strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>

int	main()
{
	printf("%ld", strlen(""));
}