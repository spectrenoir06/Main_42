/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 17:23:18 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/10 23:13:29 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *str1, char *str2, unsigned int n);

int		main()
{
	char str1[] = "salut";
	char str2[] = "saluz";

	printf("str1 = %s\nstr2 = %s\nft_strncmp(str1, str2)=%d\nstrncmp()=%d\n", str1, str2, ft_strncmp(str1, str2, 5),strncmp(str1,str2, 5));
	return (0);
}
