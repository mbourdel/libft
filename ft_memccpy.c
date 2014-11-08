/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:57:51 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/06 16:08:08 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int			i;
	char		*des;
	const char	*sr;

	i = 0;
	des = dest;
	sr = src;
	while (i < (int)n && sr[i - 1] != c)
	{
		des[i] = sr[i];
		i++;
		if (i == (int)n)
			return (NULL);
	}
	i++;
	dest += i;
	return (dest);
}
