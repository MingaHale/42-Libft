#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	slen;

	slen = ft_strlen(s);
	while (slen >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		slen--;
	}
	return (NULL);
}
// #include <stdio.h>

// int main()
// {
// 	char str[] = "Merhaba42";
// 	printf("%s",ft_strchr(str,'b'));
// }