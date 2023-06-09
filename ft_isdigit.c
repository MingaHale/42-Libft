#include "libft.h"

int	ft_isdigit(int str)
{
	if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}
