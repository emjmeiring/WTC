#include "ft.h"

char *ft_strncpy(char *dest, const char *src, int n)
{
	int		i;

	i = -1;
	while (*(src + (++i)) && i < n)
		*(dest + i) = *(src + (i));
	return (dest);
}
