/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 21:59:59 by rmoaney           #+#    #+#             */
/*   Updated: 2021/05/13 20:48:36 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, unsigned int start, size_t len)
{
	int	i;

	i = 0;
	while (s[start] != 0 && len != 0)
	{
		start++;
		len--;
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*c;
	int				j;

	if (s == NULL)
		return (NULL);
	j = 0;
	if (start >= ft_strlen(s))
	{
		c = (char *)malloc(sizeof(char) * 1);
		c[j] = '\0';
		return (c);
	}
	c = (char *)malloc(sizeof(char) * (ft_count(s, start, len) + 1));
	if (c == NULL)
		return (NULL);
	while (s[start] != '\0' && len != 0)
	{
		c[j] = s[start];
		j++;
		start++;
		len--;
	}
	c[j] = '\0';
	return (c);
}
