/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:39:50 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:39:52 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_tolower(char *str)
{
	int		char_pos;

	char_pos = -1;
	while (*(str + (++char_pos)))
		if (ft_isalpha(*(str + char_pos)) && 
		 (*(str + char_pos) >= 65 && *(str + char_pos) <= 90))
			*(str + char_pos) += 32;
	return (str);
}
