#include "libft.h"
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

	if (!s)
		return (NULL);
	nw = ft_split_words(s, c);
	tab = (char **) malloc(sizeof(char *) * (nw + 1));
	if (!tab)
		return (NULL);
	j = 0;
	while (j < nw)
	{
		i = 0;
		while (*s == c)
			s++;
		while ((s[i] != c ) && (s[i] != '\0'))
			i++;
		tab[j] = ft_substr(s, 0, i);
		if (!tab)
			return (NULL);
		j++;
		s = s + i;
	}
	tab[nw] = 0;
	return (tab);
}
/*
static size_t	ft_numstring(const char *s, char c)
{
	size_t	count;
	size_t	flag;

	count = 0;
	flag = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static size_t	ft_numchar(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

static char	**ft_free_matrix(const char **matrix, size_t len_matrix)
{
	while (len_matrix--)
		free((void *)matrix[len_matrix]);
	free(matrix);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**matrix;
	size_t	len;
	size_t	i;
	size_t	sl;

	i = 0;
	sl = 0;
	len = ft_numstring(s, c);
	matrix = (char **)malloc(sizeof(char *) * (len + 1));
	if (!matrix)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		sl = ft_numchar((const char *)s, c);
		matrix[i] = (char *)malloc(sizeof(char) * sl + 1);
		if (!matrix[i])
			return (ft_free_matrix((const char **)matrix, len));
		ft_strlcpy(matrix[i], s, sl + 1);
		s = (ft_strchr(s, (int)c));
		i++;
	}
	matrix[i] = 0;
	return (matrix);
}*/
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
