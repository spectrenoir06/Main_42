/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 19:09:43 by aalliot           #+#    #+#             */
/*   Updated: 2014/07/08 19:21:34 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index);

int		main()
{
	int		i;

	for (i = -4; i < 15; i++)
		printf("%d\t: %d\n", i, ft_fibonacci(i));
	return (0);
}
