/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:16:12 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/28 18:40:13 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	count_digits(int n)
{
	int	count;

	if (n == 0)
		count = 1;
	else
		count = 0;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

void	to_string(char *str, int i, int is_negative, int n)
{
	int		start;
	int		end;
	char	temp;

	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	start = is_negative;
	end = i - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	int		is_negative;
	char	*str;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	str = (char *)malloc((count_digits(n) + is_negative + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (is_negative)
		str[0] = '-';
	i = is_negative;
	to_string(str, i, is_negative, n);
	return (str);
}
