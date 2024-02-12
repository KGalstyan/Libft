/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:33:32 by kgalstya          #+#    #+#             */
/*   Updated: 2024/02/05 19:34:43 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*res;

	res = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)res[i] == (unsigned char)c)
		{
			return ((char *)(res + i));
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
    printf("%s", ft_memchr("Hello my friend", 'm', 15));
    return(0);
}
*/
