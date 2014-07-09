/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strupcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 20:58:23 by aalliot           #+#    #+#             */
/*   Updated: 2014/07/09 21:25:41 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main()
{
	char	c[] = "Le pate c\'est trop bon!";
	printf("%s\n", c);
	printf("%s\n", ft_strupcase(c));
  	return (0);	
}
