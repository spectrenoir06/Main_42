/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 11:16:44 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/08 11:53:52 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int 	ft_atoi(char *c);

int		main()
{
	int i;
	char str[30];

	for (i = -30; i < 31; i++)
	{
		sprintf(str, "%d", i);
		if (ft_atoi(str) != atoi(str))
			printf("Error a i=%d\n", i);
		/*else
			printf("i=%d  str='%s' ft_atoi(%s)==atoi(%s)==%d\n", i, str, str, str,ft_atoi(str));*/
	}
	return (0);
}
