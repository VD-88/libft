/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:47:12 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/06 19:55:40 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *buf, int ch, size_t length)
{
	unsigned char	*c;

	c = (void *)buf;
	if (length == 0)
		return (NULL);
	while (length--)
	{
		if (*c == (unsigned char)ch)
			return (c);
		c++;
	}
	return (NULL);
}
