/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:06:38 by mtritant          #+#    #+#             */
/*   Updated: 2024/09/29 19:12:51 by mtritant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_argv(char **argv);
void	set_values(int size, char **argv);

int	main(int argc, char *argv[])
{
	int	size;

	if (argc == 2)
	{
		size = check_argv(argv);
		if (size == 0)
			write(1, "Error\n", 6);
		else
			set_values(size, argv);
	}
	return (0);
}
