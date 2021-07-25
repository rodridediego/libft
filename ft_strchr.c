<<<<<<< HEAD
#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
=======
 #include "libft.h"
 char *ft_strchr(const char *s, int c)
 {
     int i;
     
     i = 0;
     while (s[i] != '\0')
     {
         if (s[i] == c)
            return (s + i);
        i++;
     }
     return (NULL);
 }
>>>>>>> 15535fabbefabee2a0dd3f23077893bcff8f2677
