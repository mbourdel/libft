/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:03:23 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/06 17:01:50 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*ds;
	const char	*sr;
	size_t		n;
	size_t		dslen;

	ds = dst;
	sr = src;
	n = size;
	while (n-- && *ds)
		ds++;
	dslen = ds - dst;
	n = size - dslen;
	if (n == 0)
		return (dslen + ft_strlen(sr));
	while (*sr)
	{
		if (n-- != 1)
		{
			*ds = *sr;
			ds++;
		}
		sr++;
	}
	*ds = '\0';
	return (dslen + (sr - src));
}
