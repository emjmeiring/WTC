#include "ft.h"

int		ft_strncmp(char *str1, char *str2 , size_t n)
{
	unsigned long int		i;
	int		s1;
	int		s2;
    
	i = -1;
	s1 = 0;
	s2 = 0;
	while ((++i) < n && *(str1 + i) && *(str1 + i))
	{
		s1 += *(str1 + i);
		s2 += *(str2 + i);
	}
	return (s1 - s2);
}
