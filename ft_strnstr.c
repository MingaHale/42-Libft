#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s2_len;

	i = 0;
	s2_len = ft_strlen(needle);
	if (!s2_len)
		return ((char *)haystack);
	if (len != 0)
	{
		while (haystack[i] && i < len)
		{
			j = 0;
			while (needle[j] && needle[j] == haystack[i + j] && i + j < len)
				j++;
			if (j == s2_len)
				return ((char *)&haystack[i]);
			i++;
		}
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	char hstack[] = "meliksah";
// 	char needle[] = "sah";

// 	printf("%s",ft_strnstr(hstack,needle,6));
// }