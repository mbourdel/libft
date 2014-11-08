/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:35:36 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/07 21:32:53 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	buff[22];
	char	*str;
	int		i;
	int		ntmp;

	i = 0;
	if (n < 0)
	{
		buff[i++] = '-';
		n = -n;
	}
	ntmp = n;
	while (ntmp > 0)
	{
		buff[i++] = (ntmp % 10) + 48;
		ntmp = ntmp / 10;
	}
	buff[i] = '\0';
	str = ft_memalloc((size_t)i++);
	while (--i >= 0)
		str[i] = buff[i];
	return (str);
}
