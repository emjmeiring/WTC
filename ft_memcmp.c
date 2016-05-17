/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:09:58 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 15:13:57 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void *str1, void *str2, size_t n)
{
	size_t	i;
	int		s1;
	int		s2;

	i = 0;
	s1 = 0;
	s2 = 0;
	while (i < n)
	{
		s1 += *((char*)str1 + i);
		s2 += *((char*)str2 + i++);
	}
	return (s1 - s2);
}