#include "libft.h"

int	ft_atoi(const char *s)
{
	int		result;
	int		flag_neg;
	int		i;

	result = 0;
	flag_neg = 1;
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	if (s[i] == '-')
	{
		flag_neg = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (ft_isdigit(s[i]))
	{
		result = result * 10 + (s[i] - 48);
		i++;
	}
	return (result * flag_neg);
}
