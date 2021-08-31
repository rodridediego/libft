#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;
	size_t	len_s;
	size_t	i;

	i = 0;
	len_s = ft_strlen(s);
	s_dup = (char *) malloc(sizeof(char) * (len_s + 1));
	if (s_dup == NULL)
		return (NULL);
	while (i < len_s)
	{
		s_dup[i] = (char) s[i];
		i++;
	}
	s_dup[i] = '\0';
	return (s_dup);
}
