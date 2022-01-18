/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 23:35:02 by rmoaney           #+#    #+#             */
/*   Updated: 2021/05/13 21:27:04 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s12;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	s12 = (char *)malloc(sizeof(char) * (i + j + 1));
	if (s12 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
		s12[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		s12[i++] = s2[j++];
	s12[i] = '\0';
	return (s12);
}
