#include "libft.h"
char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	size_t	len;

	if (!s1)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	if (*s1 == '\0')
	{
		return (ft_strdup(""));
	}
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - 1]))
		len --;
	s2 = ft_substr(s1, 0, len);
	return (s2);
}
