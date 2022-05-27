/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:34:33 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/20 17:41:39 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int				n;
	int				c;
	unsigned char	b[] = "Hola Paco";

	n = 0;
	c = '\0';
	printf("Resultado: %s\n", ft_memset(b, c, n));
	return (0);
}
