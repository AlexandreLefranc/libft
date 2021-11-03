#include <stdio.h>
#include "libft.h"

// crun main_part2.c ft_*.c

static void	shift1(char *c)
{
	*c += 1;
}

static void	shift1i(unsigned int i, char *s)
{
	s[i] = s[i] + 1;
}

static char	shift1map(char c)
{
	return (c + 1);
}

static char	shift1mapi(unsigned int i, char c)
{
	i = 0;
	return (c + 1);
}

int	main()
{
	printf("\n==================\nTests of memalloc\n==================\n");
	{
		void *ptr = ft_memalloc(10);
		printf("%p\n", ptr);
		free(ptr);
	}
	printf("\n==================\nTests of memdel\n==================\n");
	{
		void *ptr = ft_memalloc(10);
		printf("%p\n", ptr);
		ft_memdel(&ptr);
		printf("%p\n", ptr);
		ft_memdel(&ptr);
		printf("%p\n", ptr);
	}
	printf("\n==================\nTests of strnew\n==================\n");
	{
		int size = 100;
		char *str = ft_strnew(size);
		for (int i = 0; i < size+1; i++)
			printf("%d ", str[i]);
		printf("\n");
		free(str);
	}
	printf("\n==================\nTests of strdel\n==================\n");
	{
		char *str = ft_strnew(10);
		printf("%p\n", str);
		ft_strdel(&str);
		printf("%p\n", str);
		ft_strdel(&str);
		printf("%p\n", str);
	}
	printf("\n==================\nTests of strclr\n==================\n");
	{
		char *str = ft_strdup("Hello");
		for (int i = 0; i<6; i++)
			printf("%d ", str[i]);
		ft_strclr(str);
		printf("\n");
		for (int i = 0; i<6; i++)
			printf("%d ", str[i]);
		printf("\n");
		free(str);
	}
	printf("\n==================\nTests of striter\n==================\n");
	{
		char	*str = ft_strdup("abcd");
		printf("Initial string before function| %s\n", str);
		ft_striter(str, &shift1);
		printf("Initial string after function | %s\n", str);
	}
	printf("\n==================\nTests of striteri\n==================\n");
	{
		char	*str = ft_strdup("abcd");
		printf("Initial string before function| %s\n", str);
		ft_striteri(str, &shift1i);
		printf("Initial string after function | %s\n", str);
	}
	printf("\n==================\nTests of strmap\n==================\n");
	{
		char	*str = ft_strdup("abcd");
		printf("Initial string before function| %s | %p\n", str, str);
		char	*str2 = ft_strmap(str, &shift1map);
		printf("Initial string after function | %s | %p\n", str, str);
		printf("New string | %s | %p\n", str2, str2);
	}
	printf("\n==================\nTests of strmapi\n==================\n");
	{
		char	*str = ft_strdup("abcd");
		printf("Initial string before function| %s | %p\n", str, str);
		char	*str2 = ft_strmapi(str, &shift1mapi);
		printf("Initial string after function | %s | %p\n", str, str);
		printf("New string | %s | %p\n", str2, str2);	
	}
	printf("\n==================\nTests of strequ\n==================\n");
	{
		printf("1 : %d\n", ft_strequ("Hello", "Hello"));
		printf("1 : %d\n", ft_strequ("", ""));
		printf("0 : %d\n", ft_strequ("Hell", "Hello"));
		printf("0 : %d\n", ft_strequ(NULL, "Hello"));
		printf("0 : %d\n", ft_strequ(NULL, NULL));
	}
	printf("\n==================\nTests of strnequ\n==================\n");
	{
		printf("1 : %d\n", ft_strnequ("Hello", "Hello", 5));
		printf("0 : %d\n", ft_strnequ("Hello", "Hell", 5));
		printf("1 : %d\n", ft_strnequ("Hello", "Hell", 4));
		printf("1 : %d\n", ft_strnequ("", "", 0));
		printf("0 : %d\n", ft_strnequ(NULL, "Hello", 6));
		printf("0 : %d\n", ft_strnequ(NULL, NULL, 6));
	}
	printf("\n==================\nTests of strsub\n==================\n");
	{
		char	s[] = "Hey comment ca va ?";
		printf("Hey comment ca va ? : %s\n", ft_strsub(s, 0, 100));
		printf("Hey c : %s\n", ft_strsub(s, 0, 5));
		printf("comment : %s\n", ft_strsub(s, 4, 7));
	}
	printf("\n==================\nTests of strjoin\n==================\n");
	{
		printf("Oui vas y ouioui : %s\n", ft_strjoin("Oui vas y ", "ouioui"));
		printf("Oui vas y  : %s\n", ft_strjoin("Oui vas y ", ""));
		printf("Oui vas y o : %s\n", ft_strjoin("Oui vas y ", "o"));
		printf("ouioui : %s\n", ft_strjoin("", "ouioui"));
		printf("(null) : %s\n", ft_strjoin(NULL, "ouioui"));
		printf("(null) : %s\n", ft_strjoin(NULL, NULL));
		printf(" : %s\n", ft_strjoin("", ""));
	}
	printf("\n==================\nTests of strtrim\n==================\n");
	{
		printf("Yo : %s\n", ft_strtrim("Yo"));
		printf("Yo : %s\n", ft_strtrim(" \n\t Yo"));
		printf("Yo : %s\n", ft_strtrim("Yo \n\t\n "));
		printf("Yo : %s\n", ft_strtrim(" \n\tYo \n\t"));
		printf("Yo yoo yooo yoooo : %s\n", ft_strtrim(" \n\t  Yo yoo yooo yoooo  \t \n "));
	}
	printf("\n==================\nTests of strsplit\n==================\n");
	printf("\n==================\nTests of stritoa\n==================\n");
	printf("\n==================\nTests of putchar\n==================\n");
	{
		ft_putchar('x');
	}
	printf("\n==================\nTests of putstr\n==================\n");
	{
		ft_putstr("Hello");
	}
	printf("\n==================\nTests of putendl\n==================\n");
	{
		ft_putendl("Hello");
	}
	printf("\n==================\nTests of putnbr\n==================\n");
	printf("\n==================\nTests of putchar_fd\n==================\n");
	{
		ft_putchar_fd('x', 1);
	}
	printf("\n==================\nTests of putstr_fd\n==================\n");
	{
		ft_putstr_fd("Hello", 1);
	}
	printf("\n==================\nTests of putendl_fd\n==================\n");
	{
		ft_putendl_fd("Hello", 1);
	}
	printf("\n==================\nTests of putnbr_fd\n==================\n");
}
