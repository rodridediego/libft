#include "libft.h" //incluir stdio.h y esas cosas en la libft.h
void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        *(unsigned char *) dest = *(unsigned char *) src;
        if (*(unsigned char *) dest == (unsigned char) c)
            return (dest + 1);
        dest++;
        src++;
        i++;
    }
    return (NULL);
} 
/*
#include "libft.h"
#include <stdio.h>
void
	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
		if (*(unsigned char*)(src + i) == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}*/
int main()
{
    char dest[15];
    char src[]="holaquepasa";
    printf("%p\n", ft_memccpy(dest, src,'a',5));
    printf("%p", memccpy(dest, src,'a',5));
}