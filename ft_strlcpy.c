/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:33:19 by rmoaney           #+#    #+#             */
/*   Updated: 2021/05/05 19:43:22 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lns;

	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	lns = ft_strlen(src);
	if (dstsize == 0)
		return (lns);
	while (i < (dstsize - 1))
	{
		dst[i] = src[i];
		if (src[i] == '\0')
			break ;
		i++;
	}
	dst[i] = '\0';
	return (lns);
}
