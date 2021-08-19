#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		i;
	int		len1;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	new_s = (char *) malloc (sizeof (char) * (len1 + ft_strlen(s2) + 1));
	if (new_s == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_s[i] = s1[i];
		i++;
	}
	while (s2[i - len1] != '\0')
	{
		new_s[i] = s2[i - len1];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
