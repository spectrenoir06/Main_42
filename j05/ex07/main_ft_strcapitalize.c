/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcapitalize.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 22:55:08 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/09 23:02:59 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcapitalize(char *s);

int		main ()
{
	char str[] = "salut je m\'appelle robert je suis a 42borntocode";

	printf("%s\n",str);
	ft_strcapitalize(str);
	printf("%s\n",str);
	return (0);
}
