/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 15:55:14 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/10 22:55:05 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char src[], char *to_find);

int		main()
{
	char str[] = "le pate c\'est toute ma vie";
	char find[] = "toute";
	char *ret;
	char *ret2;
	char str1[] = "";

	ret = ft_strstr(str, find);
	ret2 = ft_strstr(str, str1);


	printf("src = %s\nret = %s\n",str ,ret);
	printf("src1 = %s\nrest %s\n",str ,ret2);
	return (0);
}
