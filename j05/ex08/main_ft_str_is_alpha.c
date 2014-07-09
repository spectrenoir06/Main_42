/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_alpha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 23:19:19 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/10 00:35:49 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_str_is_alpha(char *s);

int		main()
{
	char str1[] = "Pate";
	char str2[] = "42";
	char str3[] = "Pate en croute de 42";
	char str4[] = "";

	printf("ft_str_is_alpha(\"%s\") = %d\n",str1,ft_str_is_alpha(str1));
	printf("ft_str_is_alpha(\"%s\") = %d\n",str2,ft_str_is_alpha(str2));
	printf("ft_str_is_alpha(\"%s\") = %d\n",str3,ft_str_is_alpha(str3));
	printf("ft_str_is_alpha(\"%s\") = %d\n",str4,ft_str_is_alpha(str4));
	return (0);
}
