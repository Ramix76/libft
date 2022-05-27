/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:30:43 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/21 11:05:42 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;
	
	c = 'c';
	printf("Caracter dado: %d\n", c);
	c = ft_toupper(c);
	printf("Caracter devuelto: %d\n", c);
	return (0);
}
