/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_print_words_tables.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 16:10:34 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/14 16:20:10 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char **ft_split_whitespaces(char *str);
void ft_print_words_tables(char **tab);

int		main()
{
	char	tab[] = "ab ab\tsdw\nsds swe  			e w ";

	char **tab2;

	tab2 = ft_split_whitespaces(tab);
	ft_print_words_tables(tab2);
	return (0);
}
