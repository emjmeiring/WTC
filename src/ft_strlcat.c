#include "ft.h"

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
	dest = strncat(dest, src, n);
	return ((size_t)(sizeof(dest)));
}
