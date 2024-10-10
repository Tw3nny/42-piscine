/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgutie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:14:30 by matgutie          #+#    #+#             */
/*   Updated: 2024/09/19 16:39:27 by matgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c >= 97 && c <= 122)
	{
		write(1, &c, 1);
		c++;
	}
}
/*
int	main(void)
{	
	ft_print_alphabet();
	return (0);
}*/
