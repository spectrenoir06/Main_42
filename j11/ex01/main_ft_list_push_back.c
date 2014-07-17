/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_list_push_back.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 11:02:30 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/17 14:51:50 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int		main(int argc, char **argv)
{
	t_list *list1;
	argc = argc;
	list1 = ft_create_elem(&argv[1][0]);
	ft_list_push_back(&list1, (void *)&argv[1][1]);
	ft_list_push_back(&list1, (void *)&argv[1][2]);
	ft_list_push_back(&list1, (void *)&argv[1][3]);
	ft_list_push_back(&list1, (void *)&argv[1][4]);

	t_list *tmp = list1;
	char c;

	while(tmp->next != NULL)
	{
		c = *(char *)(tmp->data);
		printf("%c\n",c);
		tmp = tmp->next;
	}
	return (0);
}
