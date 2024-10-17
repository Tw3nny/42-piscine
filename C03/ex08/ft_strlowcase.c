/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgutie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:18:50 by matgutie          #+#    #+#             */
/*   Updated: 2024/10/02 13:13:14 by matgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 65 && str[c] <= 90)
		{
			str[c] += 32;
		}
		c++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "ISODFBSKODNF";
	
	printf("%s", ft_strlowcase(str));
}
