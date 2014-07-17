/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 11:08:06 by tpayen            #+#    #+#             */
/*   Updated: 2014/07/16 11:15:36 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_any(char **tab, int(*f)(char*));

int		ft_test(char *s)
{
	if (s[0] == 'a' || s[0] == 'A')
		return (1);
	return (0);
}

int		main(void)
{
	char	*ret1[5] = {
					"Salut",
					"Merci",
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
	printf("Renvoi 1 : %d\n", ft_any(ret1, f));
	printf("Renvoi 0 : %d\n", ft_any(ret0, f));
	return (0);
}
