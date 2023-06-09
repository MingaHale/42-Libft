#include "libft.h"

int	ft_isprint(int str)
{
	if (str >= 32 && str <= 126)
		return (1);
	else
		return (0);
}
