/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:39:31 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/11 12:45:52 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	ret = ft_memalloc(len);
	len += (size_t)start;
	i = 0;
	while (start < len)
		ret[i++] = s[start++];
	return (ret);
}
