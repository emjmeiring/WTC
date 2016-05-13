#include "ft.h"

char	*ft_toupper(char *str)
{
	int		char_pos;
	
	char_pos = -1;
	while (*(str + (++char_pos)))
	{
		if (ft_isalpha(*(str + char_pos)) && (*(str + char_pos) >= 97 &&
		 *(str + char_pos) <= 122))
			*(str + char_pos) -= 32;
	}
	return (str);
}
