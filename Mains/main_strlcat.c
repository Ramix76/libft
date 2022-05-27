/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:26:01 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/21 10:29:53 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int		n;
	char	src[] = "Hola Paco";
	char	dst[] = "Bienvenido";

	n = 5;
	printf("Longitud del string resultante: %zu\n", ft_strlcat(dst, src, n));
	return (0);
}
