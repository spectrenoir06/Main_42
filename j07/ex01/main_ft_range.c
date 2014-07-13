/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 10:43:52 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/13 11:22:28 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main()
{
	int		min = 0;
	int		max = 5;
	int		*tab1;
	int		i;

	tab1 = ft_range(min, max);
	for (i = min; i < max; i++)
		printf(" %d,",tab1[i]);
	return (0);
}
