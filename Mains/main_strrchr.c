/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:07:16 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/21 12:21:38 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	c;
	char	s[] = "Hola Paco";

	c = 'a';
	printf("Ultima ocurrencia: %s\n", ft_strrchr(s, c));
	return (0);
}
