/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:10:28 by mtritant          #+#    #+#             */
/*   Updated: 2024/09/29 19:10:33 by mtritant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_0(int size, int table[11][11])
{
	int	c;
	int	l;

	c = 1;
	l = 1;
	while (l <= size)
	{
		while (c <= size)
		{
			table[l][c] = 0;
			c++;
		}
		c = 1;
		l++;
	}
}
