/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgutie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:32:35 by matgutie          #+#    #+#             */
/*   Updated: 2024/09/26 12:08:43 by matgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 97 && str[c] <= 122) \
		|| (str[c] >= 65 && str[c] <= 90))
		{
			c++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "ISBDFUHkjf8435787gB";
	int	is_alpha;

	is_alpha = ft_str_is_alpha(str);
	printf("%d", is_alpha);
}*/
