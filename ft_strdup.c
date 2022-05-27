/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:00:00 by framos-p          #+#    #+#             */
/*   Updated: 2022/05/26 12:42:42 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		len;

	len = ft_strlen(s);
	d = malloc((len + 1) * (sizeof(char)));
	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s, len + 1);
	return (d);
	free(d);
}
