/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:25:36 by rmoaney           #+#    #+#             */
/*   Updated: 2021/05/06 16:16:17 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ds;
	char	*sr;
	int		i;
	int		j;

	if (dst == NULL && src == NULL)
		return (0);
	ds = (char *)dst;
	sr = (char *)src;
	i = len - 1;
	j = i;
	if (sr < ds)
		while (i >= 0)
			ds[j--] = sr[i--];
	else
	{
		i = 0;
		while (len != 0)
		{
			ds[i] = sr[i];
			len--;
			i++;
		}
	}
	return (dst);
}
