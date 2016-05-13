#include "ft.h"

char	*ft_strdup(const char *str)
{
	char	*new_str;
	
	new_str = (char*)malloc(sizeof(str) + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strcpy(new_str, str);
	return (new_str);
}
