#include <stdio.h>
#include <ctype.h>
#include "libft.h"

// run : crun main_otherp1.c ft_atoi.c ft_is*.c ft_to*.c

int	main()
{
	system("norminette ft_is*.c ft_to*.c ft_atoi.c");
	/*
	printf("\n==================\nTests of islower\n==================\n");
	{
		printf("%d : %d\n", islower('x'), ft_islower('x'));
		printf("%d : %d\n", islower('X'), ft_islower('X'));
	}
	printf("\n==================\nTests of isupper\n==================\n");
	{
		printf("%d : %d\n", isupper('x'), ft_isupper('x'));
		printf("%d : %d\n", isupper('X'), ft_isupper('X'));
	}
	*/
	printf("\n==================\nTests of isalpha\n==================\n");
	{
		printf("%d : %d\n", isalpha('x'), ft_isalpha('x'));
		printf("%d : %d\n", isalpha('X'), ft_isalpha('X'));
		printf("%d : %d\n", isalpha('@'), ft_isalpha('@'));
		printf("%d : %d\n", isalpha('1'), ft_isalpha('1'));
	}
	printf("\n==================\nTests of isdigit\n==================\n");
	{
		printf("%d : %d\n", isdigit('x'), ft_isdigit('x'));
		printf("%d : %d\n", isdigit('X'), ft_isdigit('X'));
		printf("%d : %d\n", isdigit('@'), ft_isdigit('@'));
		printf("%d : %d\n", isdigit('1'), ft_isdigit('1'));	
		printf("%d : %d\n", isdigit('0'), ft_isdigit('0'));	
		printf("%d : %d\n", isdigit('9'), ft_isdigit('9'));	
	}
	printf("\n==================\nTests of isalnum\n==================\n");
	{
		printf("%d : %d\n", isalnum('x'), ft_isalnum('x'));
		printf("%d : %d\n", isalnum('X'), ft_isalnum('X'));
		printf("%d : %d\n", isalnum('@'), ft_isalnum('@'));
		printf("%d : %d\n", isalnum('1'), ft_isalnum('1'));	
		printf("%d : %d\n", isalnum('0'), ft_isalnum('0'));	
		printf("%d : %d\n", isalnum('9'), ft_isalnum('9'));	
	}
	printf("\n==================\nTests of isascii\n==================\n");
	{
		printf("%d : %d\n", isascii(-5), ft_isascii(-5));
		printf("%d : %d\n", isascii('y'), ft_isascii('y'));
		printf("%d : %d\n", isascii(200), ft_isascii(200));
	}
	printf("\n==================\nTests of isprint\n==================\n");
	{	
		printf("%d : %d\n", isprint(20), ft_isprint(20));
		printf("%d : %d\n", isprint(32), ft_isprint(32));
		printf("%d : %d\n", isprint(126), ft_isprint(126));
		printf("%d : %d\n", isprint(127), ft_isprint(127));
	}
	printf("\n==================\nTests of toupper\n==================\n");
	{
		printf("%c : %c\n", toupper('e'), ft_toupper('e'));
		printf("%c : %c\n", toupper('A'), ft_toupper('A'));
		printf("%c : %c\n", toupper('a'), ft_toupper('a'));
		printf("%c : %c\n", toupper('@'), ft_toupper('@'));
		printf("%c : %c\n", toupper('1'), ft_toupper('1'));
	}
	printf("\n==================\nTests of tolower\n==================\n");
	{
		printf("%c : %c\n", tolower('e'), ft_tolower('e'));
		printf("%c : %c\n", tolower('A'), ft_tolower('A'));
		printf("%c : %c\n", tolower('a'), ft_tolower('a'));
		printf("%c : %c\n", tolower('@'), ft_tolower('@'));
		printf("%c : %c\n", tolower('1'), ft_tolower('1'));
	}
	/*
	printf("\n==================\nTests of isspace\n==================\n");
	{
		printf("%d : %d\n", isspace(' '), ft_isspace(' '));
		printf("%d : %d\n", isspace('\n'), ft_isspace('\n'));
		printf("%d : %d\n", isspace('\t'), ft_isspace('\t'));
		printf("%d : %d\n", isspace('\f'), ft_isspace('\f'));
		printf("%d : %d\n", isspace('\v'), ft_isspace('\v'));
		printf("%d : %d\n", isspace('\r'), ft_isspace('\r'));
		printf("%d : %d\n", isspace('a'), ft_isspace('a'));
	}
	*/
	printf("\n==================\nTests of atoi\n==================\n");
	{
		printf("%d : %d\n", atoi("---+--+1234ab567"), ft_atoi("---+--+1234ab567"));
		printf("%d : %d\n", atoi("++1234ab567"), ft_atoi("++1234ab567"));
		printf("%d : %d\n", atoi("1234ab567"), ft_atoi("1234ab567"));
		printf("%d : %d\n", atoi("---1234ab567"), ft_atoi("---1234ab567"));
		printf("%d : %d\n", atoi("-1234ab567"), ft_atoi("-1234ab567"));
		printf("%d : %d\n", atoi("    -1234ab567"), ft_atoi("    -1234ab567"));
		printf("%d : %d\n", atoi("		-1234ab567"), ft_atoi("		-1234ab567"));
		printf("%d : %d\n", atoi("xc1234ab567"), ft_atoi("xc1234ab567"));
		printf("%d : %d\n", atoi("-   1234ab567"), ft_atoi("-   1234ab567"));
		printf("%d : %d\n", atoi("\n-1234ab567"), ft_atoi("\n-1234ab567"));
		printf("%d : %d\n", atoi(" \n\t\v\r\f1234ab567"), ft_atoi(" \n\t\v\r\f1234ab567"));
		printf("%d : %d\n", atoi("-42"), ft_atoi("-42"));
		printf("%d : %d\n", atoi(""), ft_atoi(""));
	}
}
