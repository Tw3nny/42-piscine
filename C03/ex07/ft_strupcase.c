/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgutie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:32:22 by matgutie          #+#    #+#             */
/*   Updated: 2024/10/02 13:12:30 by matgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 97 && str[c] <= 122)
		{
			str[c] -= 32;
		}
		c++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "aRbcde";

	printf("%s", ft_strupcase(str));
}*/
