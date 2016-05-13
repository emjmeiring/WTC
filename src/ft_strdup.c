/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:36:20 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:36:22 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strdup(const char *str)
{
	char	*new_str;
	
	new_str = (char*)malloc(sizeof(str) + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strcpy(new_str, str);
	return (new_str);
}
