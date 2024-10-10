/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_rows.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:10:53 by mtritant          #+#    #+#             */
/*   Updated: 2024/09/29 19:10:57 by mtritant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	display_table(int table[11][11], int size);

void	set_rows(int table[11][11], int size)
{
	int	c;
	int	l;

	c = 0;
	l = 0;
	while (l < size)
	{
		while (c < table[l + 1][0])
		{
			table[l + 1][c + 1] = (size + 1) - (table[l + 1][0] - c);
			c++;
		}
		c = 0;
		l++;
	}
	display_table(table, size);
}
