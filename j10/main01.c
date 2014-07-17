/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 11:00:19 by tpayen            #+#    #+#             */
/*   Updated: 2014/07/16 11:05:56 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_test(int i)
{
		printf("I = %d\n", i);
}

int		main(void)
{
	int tab[10] = {10, 15, 5, 25, 0, -2, 35, 21, 25, 35};
	void	(*f)(int);

	f = &ft_test;
	ft_foreach(tab, 10, f);
	return (0);
}
