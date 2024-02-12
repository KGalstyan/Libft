/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:31:46 by kgalstya          #+#    #+#             */
/*   Updated: 2024/02/04 18:50:45 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int h)
{
	if (h > 96 && h < 123)
	{
		h = h - 32;
		return (h);
	}
	else
		return (h);
}
/*
#include <stdio.h>
int main()
{
    printf("%c", ft_toupper('k'));
    return(0);
}
*/
