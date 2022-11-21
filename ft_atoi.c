/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:27:12 by mnalyvai          #+#    #+#             */
/*   Updated: 2022/10/08 18:25:39 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	a;
	int	zz;
	int	number;

	a = 0;
	zz = 1;
	number = 0;
	while (str[a] <= 32)
	{
		a++;
	}
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			zz = zz * (-1);
			a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		number = (str[a] - '0' + (number * 10));
		a++;
	}
	return (number * zz);
}

/*int main(void)
{
	char *stroka = "	 ---+-+1346.ab567";
	int a = ft_atoi(stroka);
	printf("%d\n", a);
}*/
