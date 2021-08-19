#include "libft.h"
int	ft_split_count(char const *s, char c)
{
	int	num_words;
	int	i;

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
	printf("%d\n", num_words);
	return (num_words + 1);
}

char	**ft_split_mem(const char *s, char c)
{
	int		i;
	int		j;
	int		aux;
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
		printf("%d, %d\n", i - aux, j);
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
	int i;
	int j;
	int k;

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
	ft_split_fill(s, c, table);
	return (table);
}

int main(int arg, char **argv)
{
	char **tab;
	int j;
	char aux;

	tab = ft_split(argv[1], ' ');
	j = 0;
	aux = 0;
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);
	printf("%s\n", tab[4]);
	printf("%s\n", tab[5]);
}

/*
char	**ft_split_mem(const char *s, char c)
{
	int		i;
	int		j;
	int		aux;
	char	**table;
	
	i = 0;
	j = 0;
	aux = 0;
	table = (char **) malloc(sizeof(char *) * (ft_split_count(s, c) + 1));
	if (table == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		printf("%d, %d\n", i - aux, j);
		if ((s[i] == c) && (i != 0) && (s[i + 1] != '\0') && (s[i + 1] != c))
		{
			table[j] = (char *) malloc(sizeof(char) * (i - aux + 1));
			if (table[j] == NULL)
				return (NULL);
			aux = i + 1;
			j++;
		}
		i++;
	}
	table[j] = (char *) malloc(sizeof(char) * (i - aux + 1));
	if (table[j] == NULL)
		return (NULL);
	table[j + 1] = (char *) malloc(sizeof(char));
	table[j + 1][0] = '\0';
	return (table);
}*/