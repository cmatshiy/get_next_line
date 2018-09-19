/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:41:27 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/09 10:38:16 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int name;

	name = ft_strlen(s);
	if (s)
	{
		while (s[name] != (char)c && name >= 0)
			name--;
		if (s[name] == (char)c)
			return ((char*)&s[name]);
		else
			return (NULL);
	}
	return (NULL);
}
