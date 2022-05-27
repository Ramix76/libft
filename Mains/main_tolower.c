/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:16:11 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/21 11:54:04 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
/*	char str[] = "HOLA";
	int	i;

	printf("String dado: %s\n", str);
	i = 0;
	while (!(str[i] == '\0'))
	{
		str[i] = ft_tolower(str[i]);
	i++;
	}
	printf("String devuelto: %s\n", str); 
	return (0);
}*/
	char	j;

	j = 'H';
	printf("Caracter dado: %c\n", j);
	j = ft_tolower(j);
	printf("Caracter devuelto: %c\n", j);
	return (0);
}
