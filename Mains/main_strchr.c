/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:55:02 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/21 12:06:48 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	c;
	char s[] = "Hola Paco";

	c = 'b';
	printf("Primera ocurrencia: %s\n", ft_strchr(s, c));
	return (0);
}
