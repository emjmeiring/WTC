/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:39:59 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:40:02 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_toupper(char *str)
{
	int		char_pos;
	
	char_pos = -1;
	while (*(str + (++char_pos)))
	{
		if (ft_isalpha(*(str + char_pos)) && (*(str + char_pos) >= 97 &&
		 *(str + char_pos) <= 122))
			*(str + char_pos) -= 32;
	}
	return (str);
}
