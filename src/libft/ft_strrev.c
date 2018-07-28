/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrybak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:06:47 by mrybak            #+#    #+#             */
/*   Updated: 2017/11/13 19:02:57 by mrybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *str)
{
	size_t	i;
	size_t	j;
	char	c;

	j = 0;
	i = ft_strlen(str) - 1;
	while (j < i)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		j++;
		i--;
	}
}
