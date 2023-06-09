#include "libft.h"

static int	ft_checkset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*m;
	size_t	st;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	st = 0;
	end = ft_strlen(s1);
	while (s1[st] && ft_checkset(s1[st], set))
		st++;
	while (end > st && ft_checkset(s1[end - 1], set))
		end--;
	m = (char *)malloc(sizeof(char) * (end - st) + 1);
	if (!m)
		return (NULL);
	i = 0;
	while (st < end)
		m[i++] = s1[st++];
	m[i] = '\0';
	return (m);
}
//int main()
//{
//	char	s1[] = "-x-xnevergiveup-x-x";
//	char	set[] = "-x";
//
//	printf("%s", ft_strim(s1,set));
//	}
