#include "libft.h"
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	i = 0;
	if (!s || !f)
		return (0);
	s2 = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s2)
		return (0);
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
