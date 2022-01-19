#include <stdio.h>
#include "libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= strjoin2 ===========\n");
	printf("\033[0m");

	char *joined = ft_strjoin2(4, "hello ", "Bien", " ou bien ?", "Ou encore!");
	printf("%s | %s\n", joined, "hello Bien ou bien ?Ou encore!");
	free(joined);

	joined = ft_strjoin2(1, "hello ");
	printf("%s | %s\n", joined, "hello ");
	free(joined);

	joined = ft_strjoin2(0);
	printf("%s | %s\n", joined, NULL);
	free(joined);
}
