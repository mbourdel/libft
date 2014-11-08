/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:06:18 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/06 16:53:32 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)s;
	while (str[i] != c && i < ((int)n - 1))
		i++;
	if (str[i] == c && n != 0)
		return (str += i);
	return (NULL);
}
