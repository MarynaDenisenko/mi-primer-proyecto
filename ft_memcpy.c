/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:24:40 by mnalyvai          #+#    #+#             */
/*   Updated: 2022/10/15 19:25:16 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dest2;
    unsigned char *src2;
    size_t i;

    dest2 = (unsigned char *)dest;
    src2 = (unsigned char *)src;
    i = 0;
    
    while (i < n)
    {
        dest2[i] = src2[i];
        i++;
    }
    return (dest);
}
