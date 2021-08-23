#include "libft.h"
char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_l;

	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	if (len == 0)
		return (0);
	len_l = ft_strlen(little);
	while ((*big != '\0') && (i <= len - len_l))
	{
		if (ft_strncmp((const char *) big, little, len_l) == 0)
			return ((char *) big);
		big ++;
		i++;
	}
	return (0);
}
