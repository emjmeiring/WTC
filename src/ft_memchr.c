/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:33:13 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:33:22 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned long int		i;
	unsigned char	*str2;

	i = -1;
	str2 = (unsigned char *)str;
	while ((++i) < n)
		if(*(str2 + i) == ((char)c))
			return (str2 + i);
	return NULL;
}

