/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 11:09:46 by tpayen            #+#    #+#             */
/*   Updated: 2014/07/16 11:11:50 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char **tab, int(*f)(char*));

int		ft_test(char *s)
{
	if (s[0] == 'A' || s[0] == 'a')
		return (1);
	return (0);
}

int		main(void)
{
	char	*ret2[5] = {
					"Salut",
					"AMerci",
					"Aaaaa",
					"Super"
	};
	char	*ret0[5] = {
					"Salut",
					"Merci",
					"Cool!",
					"Super"
	};
	int	(*f)(char*);

	f = &ft_test;
	printf("Renvoi 2 : %d\n", ft_count_if(ret2, f));
	printf("Renvoi 0 : %d\n", ft_count_if(ret0, f));
	return (0);
}
