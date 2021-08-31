#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	signo;

	num = 0;
	signo = 1;
	while (((*str >= 9) && (*str <= 13)) || (*str == ' '))
		str++;
	if ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			signo = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (num * signo);
}
