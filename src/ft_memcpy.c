/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:33:50 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:33:56 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if ((&(((char*)src)[0]) >= &(((char*)dest)[0]) && (&(((char*)dest)[0]) <=
		 (&(((char*)src)[n])))))
		return ft_memmove((char*)dest, (char*)src, (int)n);
	else
		while (n--)
			*((char*)(dest++)) = *((char*)(src++));
		return (dest);
}
