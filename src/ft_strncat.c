/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:37:23 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:37:26 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strncat(char *dest,const char *src, size_t n)
{
	unsigned int	i;
	int		k;

	i = -1;
	k = 0;
	while (*(dest + k))
		k++;
	while (*(src + (++i)) && i < n)
		*(dest + k + i) = *(src + i);
	*(dest + k + i) = '\0';
	return (dest);
}
