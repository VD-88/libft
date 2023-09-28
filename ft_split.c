/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:29:02 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/27 18:47:05 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	subs_count(char const *s, char c)
{
	int	subs_count;
	int	ind;

	subs_count = 0;
	ind = 0;
	while (s[ind])
	{
		if (s[ind] != c && (s[ind + 1] == c || s[ind + 1] == 0))
			subs_count++;
		ind++;
	}
	return (subs_count);
}

int	sub_len(char const *s, char c)
{
	int	len_count;

	len_count = 0;
	while (*s == c)
		s++;
	while (*s != c && *s)
	{
		len_count++;
		s++;
	}
	return (len_count);
}

int	mem_check(char **arr, int i)
{
	if (arr[i] == NULL)
	{
		while (i-- > 0)
			free(arr[i]);
		free(arr);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		subs_n;
	char	**arr;
	int		i;

	if (s == NULL)
		return (NULL);
	subs_n = subs_count(s, c);
	arr = malloc (sizeof (char *) * (subs_n + 1));
	if (arr == 0)
		return (NULL);
	i = 0;
	arr[subs_n] = NULL;
	while (i < subs_n)
	{
		while (*s == c)
			s++;
		arr[i] = malloc(sub_len(s, c) + 1);
		if (mem_check(arr, i))
			return (NULL);
		ft_memcpy(arr[i], s, sub_len(s, c));
		arr[i][sub_len(s, c)] = 0;
		s += sub_len(s, c);
		i++;
	}
	return (arr);
}
