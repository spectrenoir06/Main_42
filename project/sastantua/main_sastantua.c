/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 17:41:38 by alaulom           #+#    #+#             */
/*   Updated: 2014/07/08 17:55:54 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	sastantua(int size);
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	 main(int argc, char * tab[])
{
	printf("%d\n",argc);
	sastantua(atoi(tab[1]));
	return (0);
}
