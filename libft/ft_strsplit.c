/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 12:26:32 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/09 10:39:41 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		list_length(char const *s, char c)
{
	int len;

	len = 0;
	if (*s != c && *s != 0)
	{
		len++;
		s++;
	}
	while (*s != 0)
	{
		if (*s != c && s[-1] == c)
			len++;
		s++;
	}
	return (len + 1);
}

char			**ft_strsplit(char const *s, char c)
{
	unsigned int	a;
	unsigned int	b;
	char			**last;

	if (s == NULL)
		return (NULL);
	last = (char**)malloc(sizeof(char*) * list_length(s, c));
	if (!last)
		return (NULL);
	b = 0;
	while (*s != 0)
	{
		a = 0;
		while (s[a] != c && s[a] != 0)
			a++;
		if (a)
		{
			last[b++] = ft_strncpy(ft_strnew(a), s, a);
			s = &s[a];
		}
		else
			s++;
	}
	last[b] = NULL;
	return (last);
}
