/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str_is_uppercase.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 01:50:58 by aalliot           #+#    #+#             */
/*   Updated: 2014/07/10 01:51:01 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_str_is_uppercase(char *s);

int		main()
{
	char str1[] = "PATE";
	char str2[] = "42";
	char str3[] = "PATE EN CROUTE DE 42";
	char str4[] = "";

	printf("ft_str_is_alpha(\"%s\") = %d\n",str1,ft_str_is_uppercase(str1));
	printf("ft_str_is_alpha(\"%s\") = %d\n",str2,ft_str_is_uppercase(str2));
	printf("ft_str_is_alpha(\"%s\") = %d\n",str3,ft_str_is_uppercase(str3));
	printf("ft_str_is_alpha(\"%s\") = %d\n",str4,ft_str_is_uppercase(str4));
	return (0);
}