/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_recursive_power.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 17:25:56 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/08 22:59:02 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <math.h>

int		ft_recursive_power(int nb, int pow);

int		main()
{
	int nb;
	int power;
	
	for ( nb=-2; nb < 10; nb++)
	{
		for(power = -2; power < 10; power++)
		{
			if (ft_recursive_power(nb, power) != pow(nb, power))
					printf("%d^%d = %d ; pow = %d \n", nb, power, ft_recursive_power(nb,power), pow(nb,power ));
		}
	}	
	return (0);
}
