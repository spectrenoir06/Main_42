/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/12 14:47:07 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/12 15:33:15 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *c);
#include <stdio.h>

int		main()
{
	char str1[30] = "cc c kevin";
	char *str2;

	str2 = ft_strdup(str1);
	printf("s1 = %s\ns2 = %s\n",str1,str2);
	str1[3] = 'Z';
	printf("s1 = %s\ns2 = %s\n",str1,str2);
	return (0);
}
