/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:08:08 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/26 16:45:19 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char const s1[] = "Hola Paco";
	char const s2[] = "Bienvenido";
	char *new;
	printf("Antes de funcion: %s\n,%s\n", s1, s2);
	printf("Despues de la funcion: %s\n", new = ft_strjoin(s1, s2));
	return (0);
}   
