/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:18:29 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/21 10:25:24 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	n;
	char src[] = "Hola Paco";
	char dst[] = "Bienvenido";

	n = 5;
	printf("Longitud del string resultante: %zu\n", ft_strlcpy(dst, src, n));
	return (0);
}
