#include "libft.h"
size_t	ft_split_count(char const *s, char c)
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

char	**ft_split_mem(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	aux;
	char	**table;
	
	i = 0;
	j = 0;
	table = (char **) malloc(sizeof(char *) * (ft_split_count(s, c) + 1));
	if (table == NULL)
		return (NULL);
	while(s[i] == c)
		i++;
	aux = i;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			table[j] = (char *) malloc(sizeof(char) * (i - aux + 1));
			if (table[j] == NULL)
				return (NULL);
			while (s[i] == c)
				i++;
			aux = i;
			j++;
		}
		else
			i++;
	}
	table[j] = (char *) malloc(sizeof(char));
	table[j][0] = '\0';
	return (table);
}

void	ft_split_fill(char const *s, char c, char **table)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	while(s[k] == c)
		k++;
	while(s[k] != '\0')
	{
		if((s[k] == c) && (k != 0) && (s[k + 1] != '\0') && (s[k + 1] != c))
		{
			table[j][i] = '\0';
			j++;
			i = 0;
		}
		else if (s[k] != c)
		{
			table[j][i] = s[k];
			i++;
		}
		k++;
	}
	table[j][i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**table;

	table = ft_split_mem(s, c);
	if(!table)
		return(NULL);
	ft_split_fill(s, c, table);
	return (table);
}
/*
int main()
{
	char **tab;

	tab = ft_split("split  ||this|for|me|||||!|", '|');
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);
	printf("%s\n", tab[4]);
	printf("%s\n", tab[5]);
}

#include "libft.h"
#include <stdio.h>

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