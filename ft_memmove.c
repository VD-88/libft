/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:14:09 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/06 16:22:30 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*temp;
	char	*temp2;

	if (dest == NULL && src == NULL)
		return (dest);
	temp = dest;
	temp2 = (char *)src;
	if (src < dest)
	{
		while (len != 0)
		{
			temp[len - 1] = temp2[len - 1];
			len--;
		}
	}
	else
	{
		while (len--)
			*temp++ = *temp2++;
	}
	return (dest);
}
