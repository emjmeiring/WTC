/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:36:33 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:36:46 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
	dest = ft_strncat(dest, src, n);
	return ((size_t)(sizeof(dest)));
}
