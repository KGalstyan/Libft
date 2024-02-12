/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:24:03 by kgalstya          #+#    #+#             */
/*   Updated: 2024/02/05 19:02:45 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (dst == NULL && dstsize == 0)
		return (0);
	while (dst[i] && i < dstsize)
		i++;
	while (src[n] && (i + n + 1 < dstsize))
	{
		dst[i + n] = src[n];
		n++;
	}
	if (i < dstsize)
		dst[i + n] = '\0';
	return (i + ft_strlen(src));
}
