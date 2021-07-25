#include "libft.h"
<<<<<<< HEAD
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;
	size_t	i;

	i = 0;
	size_dst = ft_strlen(dst);
	if (size - size_dst - 1 > 0)
	{
		while (i < size - size_dst - 1)
		{
			dst[size_dst + i] = src[i];
			i++;
		}
		dst[size_dst + i] = '\0';
	}
	return (size_dst + ft_strlen(src));
}
=======
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t size_dst;
    size_t i;

    i = 0;
    size_dst = ft_strlen(dst);
    if (size - size_dst - 1 > 0)
    {
        while (i < size - size_dst - 1)
        {
            dst[size_dst + i] = src[i];
            i++;
        }
        dst[size_dst + i] = '\0';
    }
    return (size_dst + ft_strlen(src));
}
//size es el tamaño de la dst se puede acortar para normi quitando size_dst y haciendo siempre el strlen
>>>>>>> 15535fabbefabee2a0dd3f23077893bcff8f2677
