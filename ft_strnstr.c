/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:04:36 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/06 16:50:50 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		s2len;

	i = 0;
	n++;
	if (s2[i] == '\0')
		return ((char*)s1);
	s2len = (int)ft_strlen((char*)s2);
	while (*s1 && i < (int)n)
	{
		while (*s1 == s2[i] && *s1 && s2len > i && i < (int)n)
		{
			s1++;
			i++;
		}
		if (i == s2len && i < (int)n)
		{
			s1 -= s2len;
			return ((char*)s1);
		}
		s1++;
		i = 0;
		n--;
	}
	return (NULL);
}
