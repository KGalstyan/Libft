/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:27:07 by kgalstya          #+#    #+#             */
/*   Updated: 2024/02/12 15:17:43 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char const *s, char c)
{
	size_t	words;
	size_t	n;
	int		flag;

	n = 0;
	flag = 0;
	if (!s[n])
		return (0);
	words = 0;
	while (s[n])
	{
		if (s[n] != c)
		{
			flag = 1;
		}
		else if (s[n] == c && flag)
		{
			flag = 0;
			words++;
		}
		n++;
	}
	return (words + flag);
}

static size_t	ft_wordsize(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] && s[i] != c)
	{
		if (s[i] == c)
			i++;
		else
		{
			i++;
			len++;
		}
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	l;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_countwords(s, c);
	res = (char **)malloc((len + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res[len] = NULL;
	i = 0;
	l = 0;
	while (l < len)
	{
		while (s[i] == c && s[i])
			i++;
		res[l] = ft_substr(&s[i], 0, ft_wordsize(&s[i], c));
		while (s[i] != c && s[i])
			i++;
		l++;
	}
	return (res);
}
/*

int main()
{
	char *des = "--1-2--3---4----5-----42";
	int i = 0;
	char **arr = ft_split(des, '-');
	while (i < 6)
	{
		printf("str=%s\n", arr[i]);
		i++;
	}
	free(arr);
	return(0);
}
*/
