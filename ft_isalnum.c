#include "libft.h"

int	ft_isalnum(int str)
{
	if ((str >= '0' && str <= '9') || (str >= 'A' && str <= 'Z')
		|| (str >= 'a' && str <= 'z'))
		return (1);
	else
		return (0);
}
