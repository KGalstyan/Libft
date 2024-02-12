/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:02:45 by kgalstya          #+#    #+#             */
/*   Updated: 2024/02/07 15:34:55 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s11;
	char	*s22;

	s11 = (char *)s1;
	s22 = (char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (n > i)
	{
		if (s11[i] != s22[i])
			return ((unsigned char)s11[i] - (unsigned char)s22[i]);
		i++;
	}
	return (0);
}
