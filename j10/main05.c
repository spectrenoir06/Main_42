/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 11:12:22 by tpayen            #+#    #+#             */
/*   Updated: 2014/07/16 11:13:27 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int		ft_test(int i, int k)
{
	if (i < k)
		return (i - k);
	else if (i == k)
		return (0);
	return (i - k);
}

int		main(void)
{
	int not_sort[10] = {10, 15, 25, 25, 25, 25, 12, 11, 8, 5};
	int sort[10] = {35, 29, 28, 28, 28, 27, 27, 25, 10, 1};
	int	(*f)(int, int);

	f = &ft_test;
	printf("Not Sort (0) : %d\n", ft_is_sort(not_sort, 10, f));
	printf("Sort (1) : %d\n", ft_is_sort(sort, 10, f));
	return (0);
}
