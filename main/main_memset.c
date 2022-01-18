#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= memset ===========\n");
	printf("\033[0m");
	{
		char s[10];
		void *p = memset(s, 'x', 5);
		printf("memset of s[10] with c='x' and n = 5 : %s, pointed by %p\n", p, p);
		char s2[10];
		void *p2 = ft_memset(s2, 'x', 5);
		printf("ft_memset of s[10] with c='x' and n = 5 : %s, pointed by %p\n", p2, p2);
		printf("\n");
	}
	{
		char s3[10];
		void *p3 = memset(s3, 48, 5);
		printf("memset of s[10] with c=48 and n = 5 : %s, pointed by %p\n", p3, p3);
		char s4[10];
		void *p4 = ft_memset(s4, 48, 5);
		printf("ft_memset of s[10] with c=48 and n = 5 : %s, pointed by %p\n", p4, p4);
		printf("\n");
	}
	{
		char s3[10];
		void *p3 = memset(s3, 1100, 5);
		printf("memset of s[10] with c=1100 and n = 5 : %s, pointed by %p\n", p3, p3);
		char s4[10];
		void *p4 = ft_memset(s4, 1100, 5);
		printf("ft_memset of s[10] with c=1100 and n = 5 : %s, pointed by %p\n", p4, p4);
		printf("\n");
	}
	return (0);
}
