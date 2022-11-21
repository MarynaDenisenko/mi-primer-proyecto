/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:28:23 by mnalyvai          #+#    #+#             */
/*   Updated: 2022/10/08 16:46:14 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*isalnum возвращает ненулевое значение если c -
это буква (A-Z или a-z), или цифра (0-9).*/
#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(char c)
{
	if ((c <= '9' && c >= '0') || (c <= 'Z' && c >= 'A'))
		return (1);
	else if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}

/*int main (void)
{
char d;
d = 'f';
    int c = ft_isalnum(d);
    printf("%i", c);
return (0);
}*/
