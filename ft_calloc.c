/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:54:59 by kgalstya          #+#    #+#             */
/*   Updated: 2024/02/09 17:59:30 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*arr;

	if (nelem * elsize > 2147483647)
		return (NULL);
	if (nelem > 0 && elsize > SIZE_MAX / nelem)
		return (NULL);
	arr = (void *)malloc(nelem * elsize);
	if (!arr)
		return (NULL);
	ft_bzero(arr, nelem * elsize);
	return (arr);
}
