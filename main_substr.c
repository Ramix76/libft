/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:23:47 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/25 18:56:12 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	size_t		len;

	char const	s[] = "Hol";
	len = 100;
	unsigned int start = 345345;
	printf("String dada: %s\n", s);
	printf("Substring resultante: %s\n", ft_substr(s, start, len));
	return (0);
}
