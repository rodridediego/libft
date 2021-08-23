#include "libft.h"
static size_t	ft_split_words(char const *s, char c)
{
	size_t	num_words;
	size_t	i;

	num_words = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if ((s[i] == c) && (i != 0) && (s[i + 1] != '\0') && (s[i + 1] != c))
			num_words++;
		i++;
	}
	return (num_words + 1);
}

static char	**ft_split_checks(const char *s)
{
	char	**tab;

	if (!s)
		return (NULL);
	if (*s == 0)
	{
		tab = (char **) malloc(sizeof(char *) * 1);
		tab[0] = 0;
		return (tab);
	}
	return (0);
}

char	**ft_split_memndfill(const char *s, char **tab, char c, size_t nw)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (j < nw)
	{
		i = 0;
		while (*s == c)
			s++;
		while ((s[i] != c) && (s[i] != '\0'))
			i++;
		if (i != 0)
			tab[j] = ft_substr(s, 0, i);
		if (!tab)
			return (NULL);
		j++;
		s = s + i;
	}
	tab[nw] = 0;
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	nw;

	if (!s || *s == 0)
		return (ft_split_checks(s));
	nw = ft_split_words(s, c);
	tab = (char **) malloc(sizeof(char *) * (nw + 1));
	if (!tab)
		return (NULL);
	return (ft_split_memndfill(s, tab, c, nw));
}
/*
int main()
{
	char **tab;
	int i;

	tab = ft_split("split  ||this|for|me|||||!|", '|');
	i = 0;
	while (tab[i] != 0)
	{
		printf("%s.\n", tab[i]);
		i++;
	}
	printf("%s.\n", tab[4]);
	printf("%s.\n", tab[5]);
	printf("%s.\n", tab[6]);
}
*/
