/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 19:34:43 by rmoaney           #+#    #+#             */
/*   Updated: 2021/05/13 04:19:10 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mid;
	size_t	i;
	size_t	j;
	size_t	z;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (j > 0 && ft_strchr(set, s1[j - 1]))
		j--;
	while (i < j && ft_strchr(set, s1[i]))
		i++;
	mid = (char *)malloc(sizeof(char) * (j - i + 1));
	if (mid == NULL)
		return (NULL);
	z = 0;
	while (i < j)
	{
		mid[z] = s1[i];
		i++;
		z++;
	}
	mid[z] = '\0';
	return (mid);
}
