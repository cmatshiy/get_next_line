/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:44:35 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/18 08:45:56 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t a;
	size_t b;

	a = 0;
	if (*needle == 0)
		return ((char*)haystack);
	while (haystack[a] != 0 && a < len)
	{
		b = 0;
		while (haystack[a + b] == needle[b] && needle[b] != 0 && b + a < len)
			b++;
		if (b == ft_strlen(needle))
			return ((char*)&haystack[a]);
		a++;
	}
	return (NULL);
}
