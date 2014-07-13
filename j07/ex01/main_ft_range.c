/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 10:43:52 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/13 23:38:08 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main()
{
	int		min = 5;
	int		max = 10;
	int		*tab1;
	int		i;

	tab1 = ft_range(min, max);
	for (i = 0; i < (max - min); i++)
		printf(" %d,",tab1[i]);
	return (0);
}
