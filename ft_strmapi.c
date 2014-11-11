/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:22:37 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/11 13:19:47 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	retlen;
	int		i;

	i = 0;
	retlen = ft_strlen(s);
	ret = ft_memalloc(retlen);
	while (*s)
	{
		ret[i] = f(i, *s);
		i++;
		s++;
	}
	return (ret);
}
