/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 14:53:09 by aalliot           #+#    #+#             */
/*   Updated: 2014/07/06 14:53:12 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char *str;

	str = "Salut, comment ca va? Mal et toi? Bah, pourquoi ca irrait bien?";
	printf("longueur = %d\n", ft_strlen(str));
	return (0);
}
