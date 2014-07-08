/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_iterative_factorial.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 12:19:54 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/08 12:22:01 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main()
{
	int i;

	for(i = -1; i < 14;i++)
		printf("%d! = %d\n", i, ft_iterative_factorial(i));
	return 0;
}
