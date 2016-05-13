#include "ft.h"

int     ft_strcmp(char *str1, char *str2)
{
    int		i;
    int		s1;
    int		s2;
    
    i = -1;
    s1 = 0;
    s2 = 0;
    while (*(str1 + (++i)))
        s1 += *(str1 + i);
    i = -1;
    while (*(str2 + (++i)))
        s2 += *(str2 + i);
    return (s1 - s2);
}