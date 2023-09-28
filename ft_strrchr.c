/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:19:45 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/27 16:04:24 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;

	ptr = 0;
	while (*str)
	{
		if (*str == (char)c)
			ptr = (char *) str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (ptr);
}
