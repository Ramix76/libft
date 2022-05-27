/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:02:00 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/21 13:05:48 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	n;
	char	haystack[] = "Hola Paco bienvenido";
	char	needle[] = "Paco";

	n = 11;
	printf("Primera ocurrencia de needle: %s\n", ft_strnstr(haystack, needle, n));
	return (0);
}
