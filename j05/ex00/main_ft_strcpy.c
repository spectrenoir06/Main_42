/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 11:58:32 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/09 12:31:41 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main()
{
	char src[] =  "J aime le pate il me rend plus fort";
	char dest[50];

	ft_strcpy(dest, src);

	printf("src = %s\ndest = %s\n", src , dest );
	return (0);
}
