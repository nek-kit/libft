/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:40:15 by rmoaney           #+#    #+#             */
/*   Updated: 2021/05/06 18:50:18 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;
	int				i;
	int				j;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	i = 0;
	j = 0;
	if (s11 == 0 && s22 == 0)
		return (0);
	while (n != 0)
	{
		if (s11[i] != s22[j])
			return ((int)(s11[i] - s22[j]));
		i++;
		j++;
		n--;
	}
	return (0);
}
