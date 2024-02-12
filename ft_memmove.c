/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:35:59 by kgalstya          #+#    #+#             */
/*   Updated: 2024/02/06 20:12:59 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		n;
	char		*dst2;
	const char	*src2;

	if (!dst && !src)
		return (NULL);
	dst2 = (char *)dst;
	src2 = (const char *)src;
	if (src2 < dst2)
	{
		n = len;
		while (n > 0)
		{
			n--;
			dst2[n] = src2[n];
		}
		return (dst);
	}
	n = 0;
	while (n < len)
	{
		dst2[n] = src2[n];
		n++;
	}
	return (dst);
}
