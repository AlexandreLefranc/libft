#include <stdio.h>
#include "libft.h"

// run : crun main_mem.c ft_mem*.c ft_bzero.c

int	main()
{
	printf("\n==================\nTests of memset\n==================\n");
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

	printf("\n==================\nTests of bzero\n==================\n");
	{
		char s[] = "0123456789";
		bzero(s+3, 3);
		for (int i=0; i < 10; i++) {printf("%d ", s[i]);}
		printf("\n");
		char s2[] = "0123456789";
		ft_bzero(s2+3, 3);
		for (int i=0; i < 10; i++) {printf("%d ", s2[i]);}
		printf("\n");

	}
	{
		printf("\n");
		char s[] = "0123456789";
		bzero(s+3, 100);
		for (int i=0; i < 10; i++) {printf("%d ", s[i]);}
		printf("\n");
		char s2[] = "0123456789";
		ft_bzero(s2+3, 100);
		for (int i=0; i < 10; i++) {printf("%d ", s2[i]);}
		printf("\n");

	}

	printf("\n==================\nTests of memcpy\n==================\n");
	{
		char src[] = "Salut";
		char dest[] = "Bonjour a toi";
		memcpy(dest, src, 4);
		printf("%s | %s\n", src, dest);
	}
	{
		char src[] = "Salut";
		char dest[] = "Bonjour a toi";
		ft_memcpy(dest, src, 4);
		printf("%s | %s\n", src, dest);
	}

	printf("\n==================\nTests of memccpy\n==================\n");
	{
		char src[] = "Salutation monsieur";
		char dest[] = "Bonjour a toi";
		void *p = memccpy(dest, src, 'i', 10);
		printf("%s | %s | %p\n", src, dest, p);
		p = ft_memccpy(dest, src, 'i', 10);
		printf("%s | %s | %p <- Same pointer\n", src, dest, p);
	}
	{
		char src[] = "Salutation monsieur";
		char dest[] = "Bonjour a toi";
		void *p = ft_memccpy(dest, src, 'i', 10);
		printf("%s | %s | %p <- Same behavior\n", src, dest, p);
	}
	printf("\n");
	{
		char src[] = "Salutation monsieur";
		char dest[] = "Bonjour a toi";
		void *p = memccpy(dest, src, 'i', 4);
		printf("%s | %s | %p\n", src, dest, p);
	}
	{
		char src[] = "Salutation monsieur";
		char dest[] = "Bonjour a toi";
		void *p = ft_memccpy(dest, src, 'i', 4);
		printf("%s | %s | %p\n", src, dest, p);
	}

	printf("\n==================\nTests of memmove\n==================\n");
	{
		char str1[9] = "aabbccdd";
    	printf("cpy : The string: %s\n", str1);
    	memcpy(str1 + 2, str1, 6);
    	printf("cpy : New string: %s (undefined behavior)\n", str1);

		char str2[9] = "aabbccdd";
    	printf("mov : The string: %s\n", str2);
    	memmove(str2 + 2, str2, 6);
    	printf("mov : New string: %s (built-in)\n", str2);
	}
	printf("\n");
	{
		char str1[9] = "aabbccdd";
    	printf("cpy : The string: %s\n", str1);
    	ft_memcpy(str1 + 2, str1, 6);
    	printf("cpy : New string: %s (undefined behavior)\n", str1);

		char str2[9] = "aabbccdd";
    	printf("mov : The string: %s\n", str2);
    	ft_memmove(str2 + 2, str2, 6);
    	printf("mov : New string: %s (home-made)\n", str2);
	}

	printf("\n==================\nTests of memchr\n==================\n");
	{
		char s[] = "Bonjour a toi";
		char *p1 = memchr(s, 'a', 15);
		printf("%p\n", s);
		printf("%p (builtin)\n", p1);
		char *p2 = ft_memchr(s, 'a', 15);
		printf("%p (homemade)\n", p2);
	}
	printf("\n");
	{
		char s[] = "Bonjour a toi";
		char *p1 = memchr(s, 'y', 15);
		printf("%p\n", s);
		printf("%p (builtin)\n", p1);
		char *p2 = ft_memchr(s, 'y', 15);
		printf("%p (homemade)\n", p2);
	}

	printf("\n==================\nTests of memcmp\n==================\n");
	{
		printf("builtin : homemade\n");
		char s1[] = "aaaa";
		char s2[] = "aaea";
		printf("%d : %d\n", memcmp(s1, s2, 4), ft_memcmp(s1, s2, 4));
	}
	{
		char s1[] = "aaza";
		char s2[] = "aaaa";
		printf("%d : %d\n", memcmp(s1, s2, 4), ft_memcmp(s1, s2, 4));
	}
	{
		char s1[] = "aaaa";
		char s2[] = "aaaa";
		printf("%d : %d\n", memcmp(s1, s2, 4), ft_memcmp(s1, s2, 4));
	}
	{
		char s1[] = "zaaa";
		char s2[] = "aaaa";
		printf("%d : %d\n", memcmp(s1, s2, 0), ft_memcmp(s1, s2, 0));
	}
}
