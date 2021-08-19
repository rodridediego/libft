#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*new_s;

	i = 0;
	if (s == NULL)
		return (NULL);
	new_s = (char *) malloc (sizeof(char) * (len + 1));
	if (new_s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while ((i < len) && (s[i + (size_t) start] != '\0'))
	{
		new_s[i] = s[i + (size_t) start];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
