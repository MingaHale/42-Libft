#include "libft.h"

unsigned int	wordcount(const char *s, char delimiter)
{
	unsigned int	word;

	word = 0;
	while (*s)
	{
		if (*s == delimiter)
			s++;
		else
		{
			while (*s != delimiter && *s)
				s++;
			word++;
		}
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	j;
	unsigned int	a;

	if (!s)
		return (NULL);
	arr = (char **) ft_calloc(wordcount(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	a = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			while (*s != c && *s && ++j)
				s++;
			arr[a] = (char *) ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(arr[a], s - j, j + 1);
			a++;
		}
	}
	return (arr);
}
//#include <stdio.h>
//int main()
//{
//	char **str = ft_split("wonderfull life ", ' ');
//	int i;
//	i = 0;
//	while (i < 3)
//	{
//	printf("%s\n", str[i]);
//	i++;
//	}
//	}
