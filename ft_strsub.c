/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:39:31 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/11 20:24:29 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	if (!s || !len || !s[start] || !s[start + len + 1])
		return (NULL);
	ret = ft_memalloc(len + 1);
	len += (size_t)start;
	i = 0;
	while (start < len)
		ret[i++] = s[start++];
	return (ret);
}
