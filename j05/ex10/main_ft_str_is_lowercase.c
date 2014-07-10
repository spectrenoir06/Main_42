/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_fr_str_is_lowercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 01:39:27 by aalliot           #+#    #+#             */
/*   Updated: 2014/07/10 01:39:38 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_str_is_lowercase(char *s);

int		main()
{
	char str1[] = "pate";
	char str2[] = "42";
	char str3[] = "Pate en croute de 42";
	char str4[] = "PATE";
	char str5[] = "";
	printf("ft_str_is_lowercase(\"%s\") = %d\n",str1,ft_str_is_lowercase(str1));
	printf("ft_str_is_lowercase(\"%s\") = %d\n",str2,ft_str_is_lowercase(str2));
	printf("ft_str_is_lowercase(\"%s\") = %d\n",str3,ft_str_is_lowercase(str3));
	printf("ft_str_is_lowercase(\"%s\") = %d\n",str4,ft_str_is_lowercase(str4));
	printf("ft_str_is_lowercase(\"%s\") = %d\n",str5,ft_str_is_lowercase(str5));
	return (0);
}