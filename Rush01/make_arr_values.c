/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_arr_values.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:08:57 by mtritant          #+#    #+#             */
/*   Updated: 2024/09/29 19:09:04 by mtritant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*make_arr_values(char **argv, int values[37])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] != 32 && argv[1][i] != 9)
		{
			values[j] = argv[1][i] - 48;
			j++;
		}
		i++;
	}
	values[j] = 0;
	return (values);
}
