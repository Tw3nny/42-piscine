/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgutie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:42:20 by matgutie          #+#    #+#             */
/*   Updated: 2024/09/30 16:56:12 by matgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

int	main(void)
{
	int	a = 10;
	int	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("%d \n", a);
	printf("%d", b);
	return (0);
}
