#include "libft.h"
char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while ((big[i] != '\0') && (i < len))
	{
		while ((big[i] == little[j]) && (i < len))
		{
			i++;
			j++;
		}
		if (j == ft_strlen(little))
			return ((char *)(big + i - j));
		else if (j != 0)
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (0);
}
