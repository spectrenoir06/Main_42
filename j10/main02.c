/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 11:06:02 by tpayen            #+#    #+#             */
/*   Updated: 2014/07/16 11:07:53 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_map(int *tab, int length, int(*f)(int));

int		ft_test(int i)
{
		return ((i < 0) ? 0 : 1);
}

int		main(void)
{
	int	tab[10] = {-10, 15, -5, 25, 0, -2, 35, -21, 25, 30};
	int	(*f)(int);
	int *retour;
	int i;

	f = &ft_test;
	retour = ft_map(tab, 10, f);
	i = 0;
	printf("Doit retourner:\n0, 1, 0, 1, 1, 0, 1, 0, 1, 1\n");
	printf("Votre retour:\n");
	while (i < 10)
	{
	(i < 9) ? printf("%d, " ,retour[i]) : printf("%d", retour[i]);
	i++;
	}
	return (0);
}
