/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_ltimate_range.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 10:43:52 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/13 23:35:35 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main()
{
	int		min = 5;
	int		max = 10;
	int		*tab1;
	int		i;
	int		j;

	j = ft_ultimate_range(&tab1, min, max);
	for (i = 0; i < (max - min); i++)
		printf(" %d,",tab1[i]);
	printf(" nb = %d ",j);
	return (0);
}
