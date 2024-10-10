/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgutie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:19:12 by matgutie          #+#    #+#             */
/*   Updated: 2024/09/24 10:40:52 by matgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 122;
	while (c <= 122 && c >= 97)
	{
		write(1, &c, 1);
		c--;
	}
}
/*
int	main(void)

{
	ft_print_alphabet();
	return (0);
}*/
