/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 13:20:24 by aalliot           #+#    #+#             */
/*   Updated: 2014/07/06 13:20:30 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		main(void)
{
	char *str;

	str = "Salut, comment ca va?\nBien et toi?\nCa va ca va merci.";
	ft_putstr(str);
	return (0);
}
