#include "ft.h"

char	*ft_strcat(char *dest,const char *src)
{
	int		i;
	int		k;

	i = -1;
	k = -1;
	while (*(dest + (++k))){}
	while (*(src + (++i)))
		*(dest + k + i) = *(src + i);
	*(dest + k + i) = '\0';
	return (dest);
}
