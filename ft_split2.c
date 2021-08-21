#include "libft.h"
/*
size_t	ft_split_words(char const *s, char c)
{
	size_t	num_words;
	size_t	i;

	num_words = 0;
	i = 0;
	while(s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if ((s[i] == c) && (i != 0) && (s[i + 1] != '\0') && (s[i + 1] != c))
			num_words++;
		i++;
	}
	return (num_words + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	nw;

	nw = ft_split_words(s, c);
	tab = (char **) malloc(sizeof(char *) * (nw + 1));
	if (!tab)
		return (NULL);
	while (j < nw)
	{
		i = 0;
		while (*s == c) // && s != 0
			s++;
		while ((s[i] != c ) && (s[i] != '\0'))
			i++;
		tab[j] = ft_substr(s, 0, i);
		if (!tab)
			return (NULL);
		j++;
	}
	tab[j] = (char *) malloc(sizeof(char));
	tab[j][0] = '\0';
	return (tab);
}
*/
/*
int main()
{
	char **tab;

	tab = NULL;
	printf("%c\n", tab[0][0]);/*
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);
	printf("%s\n", tab[4]);
	printf("%s\n", tab[5]);
	printf("%s\n", tab[6]);
}*/