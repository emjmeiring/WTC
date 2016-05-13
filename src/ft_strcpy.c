/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:35:59 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:36:04 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char *ft_strcpy(char *dest, const char *src)
{
	int		i;	
	int		j;
	int		dst_len;
	int		src_len;

	j = -1;
	i = -1;
	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dst_len < src_len)
		{
			char new_dest[src_len];
			dest = new_dest;
		}
	if (!((&(((char*)src)[0]) >= &(((char*)dest)[0]) && (&(((char*)dest)[0]) <= 
		(&(((char*)src)[src_len]))))))
		while (*(src + (++i)))
			*(dest + (++j)) = *(src + i);
		return (dest);
}
