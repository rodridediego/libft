#include "libft.h"

static int	ft_itoa_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

static int	ft_itoa_size(int n)
{
	int	i;

	i = 0;
	while (n > 9)
	{
		n = ft_itoa_abs(n) / 10;
		i++;
	}
	i++;
	return (i);
}

static char	*ft_itoa_aux(int n, int sign)
{
	int		aux;
	int		i;
	char	*num;

	if (n == -2147483648)
	{
		num = ft_itoa(-2147483647);
		if (num == NULL)
			return (NULL);
		num[10] = '8';
		return (num);
	}
	i = ft_itoa_size(ft_itoa_abs(n));
	num = (char *) malloc(sizeof(char) * (i + sign + 1));
	if (num == NULL)
		return (NULL);
	num[i + sign] = '\0';
	while (i > 0)
	{
		aux = ft_itoa_abs(n) % 10;
		n = ft_itoa_abs(n) / 10;
		num[i + sign - 1] = '0' + aux;
		i--;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*num;

	sign = (n < 0);
	num = ft_itoa_aux(n, sign);
	if (num == NULL)
		return (NULL);
	if (sign == 1)
		num[0] = '-';
	return (num);
}
