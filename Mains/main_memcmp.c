/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:51:25 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/21 13:01:27 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	n;
	char	s1[] = "Hola Paco";
	char	s2[] = "Hola Bea";

	n = 6;
	printf("Resultado: %d\n", ft_memcmp(s1, s2, n));
	return (0);
}
