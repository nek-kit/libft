/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:42:04 by rmoaney           #+#    #+#             */
/*   Updated: 2021/05/15 13:35:23 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lnd;
	size_t	lns;
	size_t	i;
	size_t	y;

	lnd = ft_strlen(dst);
	lns = ft_strlen(src);
	y = lnd + lns;
	i = 0;
	if (dstsize == 0)
		return (lns);
	if (dstsize <= lnd)
		return (lns + dstsize);
	if (src[0] == '\0')
		return (lns + lnd);
	while ((dstsize - lnd - 1) > 0)
	{
		if (src[i] == '\0')
			break ;
		dst[lnd] = src[i];
		i++;
		lnd ++;
	}	
	dst[lnd] = '\0';
	return (y);
}
