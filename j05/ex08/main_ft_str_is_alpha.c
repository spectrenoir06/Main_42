/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_alpha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 23:19:19 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/09 23:33:20 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_str_is_alpha(char *s);

int		main()
{
	char str1[] = "Pate";
	char str2[] = "42";

	printf("ft_str_is_alpha(\"%s\") = %d\n",str1,ft_str_is_alpha(str1));
	printf("ft_str_is_alpha(\"%s\") = %d\n",str2,ft_str_is_alpha(str2));
	return (0);
}
