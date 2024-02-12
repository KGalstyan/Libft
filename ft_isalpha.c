/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:17:41 by kgalstya          #+#    #+#             */
/*   Updated: 2024/02/04 17:55:16 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a < 'A' || a > 'z') || (a > 'Z' && a < 'a'))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>

int main()
{
	char t = '';
	printf("%d", ft_isalpha(t));
	return(0);
}
*/
