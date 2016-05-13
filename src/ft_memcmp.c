#include "ft.h"

int		ft_memcmp(void *str1, void *str2, size_t n)
{
	unsigned long int		i;
	int		s1;
	int		s2;

	i = -1;
	s1 = 0;
	s2 = 0;
	while ((++i) < n)
	{
		s1 += *((char*)str1 + i);
		s2 += *((char*)str2 + i);
	}
	return (s1 - s2);
}
