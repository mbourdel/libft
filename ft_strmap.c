/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:17:54 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/11 12:22:02 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*ret;
	size_t	retlen;
	int		i;

	i = 0;
	retlen = ft_strlen(s);
	ret = ft_memalloc(retlen);
	while (*s)
	{
		ret[i++] = f(*s);
		s++;
	}
	return (ret);
}
