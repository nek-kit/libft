/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 21:17:05 by rmoaney           #+#    #+#             */
/*   Updated: 2021/05/05 22:22:47 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ds;
	char	*sr;
	int		i;

	if (dst == NULL && src == NULL)
		return (0);
	ds = (char *)dst;
	sr = (char *)src;
	i = 0;
	while (n != 0)
	{
		ds[i] = sr[i];
		i++;
		n--;
	}
	return (dst);
}
