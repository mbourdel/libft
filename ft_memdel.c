/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:59:03 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/08 18:08:15 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	char	**tab;
	int		i;
	int		j;

	tab = (char**)ap;
	i = 0;
	j = 0;
	while (tab[j][0] != NULL)
	{
		while (tab[j][i] != NULL)
			free(tab[j][i++];
		free(tab[j]);
		j++;
		i = 0;
	}
	free(tab);
}
