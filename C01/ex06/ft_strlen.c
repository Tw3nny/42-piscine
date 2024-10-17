/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgutie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:28:27 by matgutie          #+#    #+#             */
/*   Updated: 2024/09/25 10:53:32 by matgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	int	longueur;
	char	*chaine_de_caracteres;

	chaine_de_caracteres = "ue ue sa dit quoi";
	longueur = ft_strlen(chaine_de_caracteres);
	printf("le nombre de caracteres est %d", longueur);
	return (0);
}
