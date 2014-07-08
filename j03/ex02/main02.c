/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 14:39:49 by aalliot           #+#    #+#             */
/*   Updated: 2014/07/06 14:39:51 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int d;
	int m;
	int *DIV;
	int *mod;

	a = 10;
	b = 3;
	DIV = &d;
	mod = &m;
	ft_div_mod(a, b, DIV, mod);
	printf("%d\n", *DIV);
	printf("%d\n", *mod);
	return (0);
}
