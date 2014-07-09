/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 14:16:14 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/09 14:27:15 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	char src[] = "le pate ma sauve le vie une fois au vietname";
	char dest[50];
	unsigned int nb = 32;

	ft_strncpy(dest, src,nb );

	printf("src = %s\ndest = %s\nnb = %d", src, dest, nb); 
	return (0);
}
