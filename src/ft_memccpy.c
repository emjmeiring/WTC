#include "ft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	if ((&(((char*)src)[0]) >= &(((char*)dest)[0]) && (&(((char*)dest)[0]) <=
	 (&(((char*)src)[n])))))
		return ("Overlapping memory areas, use memmove.");
	else 
	{
		while (n--)
		{
			if (*((char*)(src)) == c)
				return (dest + 1);
			*((char*)(dest++)) = *((char*)(src++));
		}
		return (NULL);
	}
}
