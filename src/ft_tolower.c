#include "ft.h"

char	*ft_tolower(char *str)
{
	int		char_pos;

	char_pos = -1;
	while (*(str + (++char_pos)))
		if (ft_isalpha(*(str + char_pos)) && 
		 (*(str + char_pos) >= 65 && *(str + char_pos) <= 90))
			*(str + char_pos) += 32;
	return (str);
}
