/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:38:27 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/26 16:52:20 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char s1[] = "442442Hola Paco4242442";
	char set[] = "42";
	char *new;
	printf("Antes del trim: %s\n",s1);
	printf("Despues del trim: %s\n", new = ft_strtrim(s1, set));
	return (0);
}
