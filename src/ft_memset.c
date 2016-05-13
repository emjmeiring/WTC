#include "ft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned long		i;
	char	*c_str;

	i = -1;
	c_str = str;
	*c_str = *(char*)(str);
	while((++i) < n && *(c_str + i))
		*(c_str + i) = c;
	return str;
}
