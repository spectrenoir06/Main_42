/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_numeric.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 00:47:28 by aalliot           #+#    #+#             */
/*   Updated: 2014/07/10 01:09:25 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_str_is_numeric(char *s);

int		main()
{
	char str1[] = "Pate";
	char str2[] = "42";
	char str3[] = "Pate en croute de 42";
	char str4[] = "";

	printf("ft_str_is_alpha(\"%s\") = %d\n",str1,ft_str_is_numeric(str1));
	printf("ft_str_is_alpha(\"%s\") = %d\n",str2,ft_str_is_numeric(str2));
	printf("ft_str_is_alpha(\"%s\") = %d\n",str3,ft_str_is_numeric(str3));
	printf("ft_str_is_alpha(\"%s\") = %d\n",str4,ft_str_is_numeric(str4));
	return (0);
}
