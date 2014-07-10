/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maim_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 10:35:08 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/10 11:22:56 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strcat(char *str1, char *str2);

int		main()
{
	char str1[200] = "Le Moyen Age fait du pate un chef d'oeuvre,";
	char str2[] = " ce qui n\'est au XI eme siecle";
	char str3[] = " qu\'un simple hache de viandes epicees.";

	printf("str1 = %s\n", str1);

	ft_strcat(str1, str2);
	ft_strcat(str1, str3);

	printf("str2 = %s\n", str2);
	printf("str3 = %s\n", str3);
	printf("str1 + str2 + str3 = %s\n", str1);
	return (0);
}

