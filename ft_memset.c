/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 19:03:27 by rmoaney           #+#    #+#             */
/*   Updated: 2021/05/05 19:40:39 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*i;
	int				j;

	j = 0;
	i = (unsigned char *)b;
	while (len != 0)
	{
		i[j] = (unsigned char)c;
		j++;
		len--;
	}
	return (b);
}	
