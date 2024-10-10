/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:08:10 by mtritant          #+#    #+#             */
/*   Updated: 2024/09/29 19:08:15 by mtritant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	display_table(int table[11][11], int size)
{
	int	l;
	int	c;
	char	digit;

	size += 2;
	l = 0;
	c = 0;
	while (l < size)
	{
		while (c < size)
		{
			if (!table[l][c])
				table[l][c] = 0;
			digit = table[l][c] + 48;
			write(1, &digit, 1);
			c++;
		}
		c = 0;
		l++;
		write(1, "\n", 1);
	}
}
