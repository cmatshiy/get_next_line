/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:43:27 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/08 12:18:29 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t a;
	size_t b;

	a = 0;
	if (*needle == 0)
		return ((char*)haystack);
	while (haystack[a] != 0)
	{
		b = 0;
		while (haystack[a + b] == needle[b] && haystack[a + b] != 0)
			b++;
		if (b == ft_strlen(needle))
			return ((char*)&haystack[a]);
		a++;
	}
	return (NULL);
}
