/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:39:38 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:39:39 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strstr(char *haystack, const char *needle)
{
	int		i;
	int 	j;
	
	i = 0;
	j = 0;
	while (*(haystack + i))
	{
		if (*(haystack + i) == *(needle + j))
		{
			i++;
			j++;
		} 
		else
			i++;
		if (*(needle + j + 1) == '\0')
			return ((haystack + (i - j)));
	}
	return (NULL);
}
