/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:06:24 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/07 18:53:35 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(const char *s, char c)
{
	char	*str;
	char	**ret;
	int		nbofstr;
	int		i;

	str = (char*)s;
	i = -1;
	nbofstr = 0;
	if (str[i] != c)
		nbofstr++;
	while (str[++i])
		if (str[i] == c && str[i + 1] != c)
			nbofstr++;
	i = 0;
	ret = (char**)malloc(sizeof(char**) * nbofstr);
	while (i < nbofstr)
		ret[i++] = (char*)ft_memalloc(ft_strlen(str));
	i = 0;
	nbofstr = 0;
	while (*str)
	{
		if (*str != c)
		{
			ret[nbofstr][i++] = *str;
			str++;
		}
		else if (nbofstr > 0 && (*str - 1) != c || (*str - 1) == ret)
		{
			nbofstr++;
			str++;
		}
		else
			str++;
		if (ret[nbofstr][0])
			printf("%s\n", ret[nbofstr]);
	}
	printf("7\n");
	return (ret);
}
