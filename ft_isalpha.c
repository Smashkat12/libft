

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((ft_islower(c)) || (ft_isalpha(c)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
