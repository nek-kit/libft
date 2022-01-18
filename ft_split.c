/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 04:31:14 by rmoaney           #+#    #+#             */
/*   Updated: 2021/05/13 06:07:22 by rmoaney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	string(char const *s, char c)
{
	size_t	str;
	size_t	i;
	size_t	gate;

	str = 0;
	gate = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && gate == 0)
		{
			gate = 1;
			str++;
		}
		else if (s[i] == c)
			gate = 0;
		i++;
	}
	return (str);
}

static char	**clean(char **m2)
{
	size_t	i;

	i = 0;
	while (m2[i] != 0)
	{
		free (m2[i]);
		i++;
	}
	free (m2);
	return (NULL);
}

static size_t	len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != 0)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char		**m2;
	size_t		numstr;
	size_t		j;

	j = 0;
	if (s == NULL)
		return (NULL);
	numstr = string(s, c);
	m2 = (char **)malloc(sizeof(char *) * (numstr + 1));
	if (m2 == NULL)
		return (NULL);
	while (j < numstr)
	{
		while (*s == c && *s != '\0')
			s++;
		m2[j] = ft_substr(s, 0, len(s, c));
		if (m2[j] == NULL)
			return (clean(m2));
		s = s + len(s, c);
		j++;
	}
	m2[j] = NULL;
	return (m2);
}
