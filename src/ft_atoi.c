/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:27:58 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:28:34 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(const char *nptr)
{
	int		res;
	int		lctrl;
	int		sign;

	lctrl = 0;
	res = 0;
	sign = 1;
	if (*nptr == 45)
	{
		nptr++;
		sign = -1;
	}
	while (*(nptr + lctrl))
		res = res * 10 + (*(nptr + (lctrl++)) - '0');
	return (res*sign);
}
