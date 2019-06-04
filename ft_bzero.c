
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *ptr;
	size_t i;

	ptr = s;
	i = 0;
	if (!n)
	{
		return;
	}
	else
	{
		while (i < n)
		{
			ptr[i] = 0;
			i++;
		}
	}
}
