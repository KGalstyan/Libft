/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:14:24 by kgalstya          #+#    #+#             */
/*   Updated: 2024/02/05 14:52:40 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;
	char	*t;

	t = (char *)s;
	i = 0;
	while (i < len)
	{
		t[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int main()
{
    void *e = 'sjaxnsss';
    int a = 2;
    size_t l = 3;
    printf("%s", ft_memset(*e, a, l));
    return(0);
}
*/
