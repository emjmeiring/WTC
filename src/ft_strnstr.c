#include "ft.h"

char	*ft_strnstr(char *hay, char *needle, size_t n)
{
	int		i;
	size_t		j;

	i = -1;
	while (*(hay + (++i)))
	{
		j = -1;
		while (*(hay + (i++)) == *(needle + (++j)) && j < n)
			if (*(needle + j) == '\0' || j == n)
				return (hay + (i-j));
		i -= j;
		i++;
	}
	return (hay);
}
