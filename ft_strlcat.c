/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:56:40 by mnalyvai          #+#    #+#             */
/*   Updated: 2022/10/15 20:59:55 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	src_dst;
	size_t	i;

	src_len = 0;
	src_dst = 0;
	while (src[src_len] != '\0' )
		src_len ++;
	while (dst[src_dst] != '\0' )
		src_dst ++;
	if (size == 0)
	{
		return (src_len);
	}
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[src_dst + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_dst);
}
