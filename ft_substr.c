/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:07:23 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/08 16:19:29 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	ind;

	if (start >= (unsigned int)ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len > (unsigned int)ft_strlen((char *)s) - start)
		len = (unsigned int)ft_strlen((char *)s) - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (sub == 0)
		return (NULL);
	ind = 0;
	while (ind < len)
	{
		sub[ind] = s[start];
		ind++;
		start++;
	}
	sub[ind] = 0;
	return (sub);
}
