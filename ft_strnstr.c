#include "libft.h"

/*char	*ft_strnstr(const char	*big, const char *little, size_t len)
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
		else if ((j != 0) && (i < len))
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (0);
}*/
char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_l;

	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	len_l = ft_strlen(little);
	while ((*big != '\0') && (i <= len - len_l))
	{
		if (strncmp((const char *) big, little, len_l) == 0)
			return ((char *) big);
		big ++;
		i++;
	}
	return (0);
}
