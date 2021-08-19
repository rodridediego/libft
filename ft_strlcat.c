#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	i;

	i = 0;
	len_dst = ft_strlen(dst);
	if (size - len_dst - 1 > 0)
	{
		while ((i < size - len_dst - 1 ) && (src[i] != '\0'))
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		if (len_dst < size)
			dst[len_dst + i] = '\0';
	}
	return (len_dst + ft_strlen(src));
}
