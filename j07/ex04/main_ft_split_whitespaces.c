/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split_whitespaces.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 11:48:34 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/14 15:30:36 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char **ft_split_whitespaces(char *str);

int		main()
{
	char	tab[] = "ab ab\tsdw\nsds swe  e w ";

	char **tab2;

	tab2 = ft_split_whitespaces(tab);
	int i = 0;
	while (tab2[i])
	{
		printf("%s\n", tab2[i]);
		i++;
	}
	return (0);
}
