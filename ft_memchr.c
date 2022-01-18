/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:29:37 by rmoaney           #+#    #+#             */
/*   Updated: 2021/05/06 17:35:58 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*si;
	unsigned char	ci;
	int				i;

	si = (unsigned char *)s;
	ci = (unsigned char )c;
	i = 0;
	while (n != 0)
	{
		if (si[i] == ci)
			return ((void *)&si[i]);
		i++;
		n--;
	}
	return (NULL);
}
