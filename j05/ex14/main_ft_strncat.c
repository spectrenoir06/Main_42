/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 11:39:09 by aalliot           #+#    #+#             */
/*   Updated: 2014/07/10 11:39:14 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *str1, char *str2, int nb);

int		main()
{
	char str1[200] = "Le Moyen Age fait du pate un chef d'oeuvre,";
	char str2[] = " ce qui n\'est au XI eme siecle";
	char str3[] = " qu\'un simple hache de viandes epicees.";

	printf("str1 = %s\n", str1);

	ft_strncat(str1, str2, 13);
	ft_strncat(str1, str3, 30);

	printf("str2 = %s\n", str2);
	printf("str3 = %s\n", str3);
	printf("str1 + str2 + str3 = %s\n", str1);
	return (0);
}
