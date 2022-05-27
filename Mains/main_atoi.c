/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:10:10 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/21 13:17:25 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char str[] = "9Hola Paco";

	printf("String dado: %s\n", str);
	printf("Entero devuelto: %d\n", ft_atoi(str));
	return (0);
}
