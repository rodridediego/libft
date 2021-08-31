#include "libft.h"
char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	if ((unsigned char)c == '\0')
		return ((char *)str + i);
	while (i-- > 0)
	{
		if (*(str + i) == (unsigned char)c)
			return ((char *)str + i);
	}
	return ((char *) NULL);
}