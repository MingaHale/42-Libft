#include "libft.h"

int	ft_isascii(int str)
{
	if (str >= 0 && str <= 127)
		return (1);
	else
		return (0);
}
