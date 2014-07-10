/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_printable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 09:54:12 by aalliot           #+#    #+#             */
/*   Updated: 2014/07/10 09:54:16 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_str_is_printable(char *s);

int		main()
{
	char str1[] = "PATE";
	char str2[] = "42";
	char str3[] = "PATE EN CROUTE DE 42";
	char str4[] = "";

	str1[2] = 27;

	printf("ft_str_is_alpha(\"%s\") = %d\n",str1,ft_str_is_printable(str1));
	printf("ft_str_is_alpha(\"%s\") = %d\n",str2,ft_str_is_printable(str2));
	printf("ft_str_is_alpha(\"%s\") = %d\n",str3,ft_str_is_printable(str3));
	printf("ft_str_is_alpha(\"%s\") = %d\n",str4,ft_str_is_printable(str4));
	return (0);
}