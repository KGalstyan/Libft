/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:36:12 by kgalstya          #+#    #+#             */
/*   Updated: 2024/02/05 13:53:45 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((s[i] == (char) c))
			return ((char *)s + i);
		i--;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (0);
}
/*
#include <stdio.h>

int main()
{
    int a = 't';
    char *t = ft_strrchr("orangu ntasxg ahsxyr xra t tan", a);
    printf("%s", t);
    return(0);
}
*/
