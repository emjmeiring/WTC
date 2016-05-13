#include "ft.h"

char	*ft_strrchr(char *str, int c)
{
	int		i;

	i = strlen(str) - 1;
	while(i > 0 && *(str + i) != c)
	{
		i--;
	}
	return (str + i);
}
