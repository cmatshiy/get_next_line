/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 12:18:07 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/08 15:11:18 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *string;

	string = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (string)
		ft_strcpy(string, s1);
	return (string);
}
