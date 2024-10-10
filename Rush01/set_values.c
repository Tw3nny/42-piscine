/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:11:13 by mtritant          #+#    #+#             */
/*   Updated: 2024/09/29 19:11:23 by mtritant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	set_rows(int table[11][11], int size);
int	make_arr_values(char **argv, int values[37]);
void	set_0(int size, int table[11][11]);

void	set_values(int size, char **argv)
{
	int	table[11][11];
	int	values[37];
	int	i;
	int	j;
	int	k;
	int	l;

	make_arr_values(argv, values);
	j = 0;
	i = 0;
	k = 0;
	l = 0;
	while (k < 2)
	{
		while (i < size)
		{
			table[l][i + 1] = values[j];
			i++;
			j++;
		}
		i = 0;
		l = size + 1;
		k++;
	}
	k = 0;
	i = 0;
	l = 0;
	while (k < 2)
	{
		while (l < size)
		{
			table[l + 1][i] = values[j];
			l++;
			j++;
		}
		l = 0;
		i = size + 1;
		k++;
	}
	set_0(size, table);
	set_rows(table, size);
}
