/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 15:55:14 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/09 16:01:46 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char src[], char *to_find);

int		main()
{
	char str[] = "le pate c est toute ma vie";
	char find[] = "toute";
	char *ret;

	ret = ft_strstr(str, find);

	printf("src = %s\nret = %s\n",str ,ret);
	return (0);
}
