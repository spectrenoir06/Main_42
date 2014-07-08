/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 15:40:48 by aalliot           #+#    #+#             */
/*   Updated: 2014/07/06 15:40:58 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int A;
	int B;
	int *a;
	int *b;

	A = 10;
	B = 3;
	a = &A;
	b = &B;
	ft_swap(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
	return (0);
}

