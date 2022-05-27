/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:15:55 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/23 16:27:39 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	i;
	int	n;	
	char *ptr; 
	
	n = 5;
	ptr = ft_calloc(n, sizeof(char));
	if (ptr == NULL)
		printf("Memoria no asignada: %s\n", ptr);
		exit(0);
	else
	{
		printf("Memoria asignada con exito: %s\n", ptr);
		i = 0;
		while (i < n; ++i)
		{
			ptr[i] = i + 1;
		}
		printf("Elementos del array: ");
		i = 0;
		while (i < n; ++i)
			printf("%d, ", ptr[i]);
	}
	return (0);
}
