/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_iterative_power.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 14:00:08 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/08 15:28:10 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int pow);

int		main()
{
	int nb;
	int pow;
	
	for ( nb=-2; nb < 10; nb++)
		for(pow = -2; pow < 10; pow++)
			printf("%d^%d = %d \n", nb, pow, ft_iterative_power(nb,pow));
	return (0);
}
