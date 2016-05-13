#include "ft.h"

void	*ft_bzero(void *str, size_t n)
{
	unsigned long int		i;

	i = -1;
	while ((++i) < n)
		*((char*)(str + i)) = '\0';
	return (str);
}
