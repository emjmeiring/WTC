/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:39:00 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:39:05 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strnstr(char *hay, char *needle, size_t n)
{
	int		i;
	size_t		j;

	i = -1;
	while (*(hay + (++i)))
	{
		j = -1;
		while (*(hay + (i++)) == *(needle + (++j)) && j < n)
			if (*(needle + j) == '\0' || j == n)
				return (hay + (i-j));
		i -= j;
		i++;
	}
	return (hay);
}
