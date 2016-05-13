/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:32:31 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:33:01 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
