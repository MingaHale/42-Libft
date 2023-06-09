#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *) ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
// #include <stdio.h>

// char	ft_42(unsigned int a,char c)
// {
// 	return(a+c);
// }
// int main()
// {
// 	char s[] = "merhaba";
// 	char *str;
// 	str = ft_strmapi(s,ft_42);
// 	printf("%s",str);
// }
