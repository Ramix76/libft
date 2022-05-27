/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:48:39 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/21 10:16:32 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	n;
	unsigned char src[] = "Hola Paco";
	unsigned char dst[] = "Bienvenido";

	n = 5;
	printf("String resultante: %s\n", ft_memmove(dst, src, n));
	return (0);
}
