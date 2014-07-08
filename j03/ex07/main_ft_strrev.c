/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 18:36:02 by aalliot           #+#    #+#             */
/*   Updated: 2014/07/08 11:28:15 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strrev(char *str);

int		main(void)
{
	char c[] = "ab";
	
	printf("%s\n", c);			
	ft_strrev(c);
	printf("%s\n", c);
	printf("%s",ft_strrev(c));
	return (0);
}
