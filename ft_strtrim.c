/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 19:12:16 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/07 19:17:42 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*src;
	char	*dest;
	int		i;

	i = 0;
	src = (char*)s;
	dest = ft_memalloc(ft_strlen(src));
	while (*src)
	{
		if (*src == ' ' || *src == '\n' || *src == '\t')
			src++;
		else
		{
			dest[i++] = *src;
			src++;
		}
	}
	return (dest);
}
