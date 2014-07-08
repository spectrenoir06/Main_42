/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_recursive_power.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 17:25:56 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/08 17:25:58 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int		main_ft_recursive_power(int nb, int pow);

int		main()
{
	int nb;
	int pow;
	
	for ( nb=-2; nb < 10; nb++)
		for(pow = -2; pow < 10; pow++)
			printf("%d^%d = %d \n", nb, pow, main_ft_recursive_power(nb,pow));
	return (0);
}