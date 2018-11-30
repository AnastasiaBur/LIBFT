/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:05:17 by jsanford          #+#    #+#             */
/*   Updated: 2018/11/30 20:44:15 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*arr;
	unsigned int		i;

	i = 0;
	arr = s;
	if (n)
	{
		while (i < n - 1 && arr[i] != (unsigned char)c)
			i++;
	}
	if (arr[i] == (unsigned char)c)
		return ((void*)(s + i));
	else
		return (NULL);
}
