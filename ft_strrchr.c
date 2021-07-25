#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	flag;

	i = 0;
	flag = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			flag = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	if (flag == -1)
		return (NULL);
	else
		return ((char *)(s + flag));
}
