/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 17:23:18 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/09 18:09:06 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *str1, char *str2);

int		main()
{
	char str1[] = "salut je suis le 1er";
	char str2[] = "Salut je suis le 2eme";
	char str3[] = "salut je suas dhawi;a4582a4le 1er";
	char str4[] = "salut je suihahuiod486413216ais le 2eme";

	printf("str1 = %s\nstr2 = %s\nft_strcmp(str1, str2)=%d\nstrcmp()=%d\n", str1, str2, ft_strcmp(str1, str2),strcmp(str1,str2));
	printf("str1 = %s\nstr2 = %s\nft_strcmp(str1, str2)=%d\nstrcmp()=%d\n", str3, str4, ft_strcmp(str3, str4),strcmp(str3,str4));
	return (0);
}
