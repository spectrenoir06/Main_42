/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlowcase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 21:39:43 by aalliot           #+#    #+#             */
/*   Updated: 2014/07/09 21:50:56 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main()
{
	char	c[] = "LE PATE QUOI!!! LE PATE...";

	printf("%s\n", c);
	printf("%s\n", ft_strlowcase(c));
	return (0);
}
