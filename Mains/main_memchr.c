/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:38:14 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/21 12:50:24 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	c;
	int		n;
	char 	s[] = "Hola Paco";

	c = 'a';
	n = 7;
	printf("Puntero devuleto: %s\n", ft_memchr(s, c, n));
	return (0);
}
