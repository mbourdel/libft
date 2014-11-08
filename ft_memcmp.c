/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:20:17 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/07 19:27:58 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = (char*)s1;
	str2 = (char*)s2;
	while (str1[i] == str2[i] && str1[i] && i < (int)n)
		i++;
	return (str1[i] - str2[i]);
}
