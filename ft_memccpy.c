/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 22:40:17 by rmoaney           #+#    #+#             */
/*   Updated: 2021/05/06 13:25:07 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;
	unsigned char	q;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	q = (unsigned char )c;
	i = 0;
	while (n != 0)
	{
		ds[i] = sr[i];
		if (sr[i] == q)
			return ((void *)&ds[i + 1]);
		i++;
		n--;
	}
	return (NULL);
}
