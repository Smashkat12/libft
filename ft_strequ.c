

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (s1 && s2)
	{
		while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
		{
			i++;
		}
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
}