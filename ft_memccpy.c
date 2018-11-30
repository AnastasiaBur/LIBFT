/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:05:13 by jsanford          #+#    #+#             */
/*   Updated: 2018/11/30 21:06:53 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict s1, const void *restrict s2, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned int		i;

	i = 0;
	d = s1;
	s = s2;
	if (n)
	{
		while (i < n - 1 && s[i] != (unsigned char)c)
		{
			d[i] = s[i];
			i++;
		}
		if (s[i] == (unsigned char)c)
			return ((void *)(s1 + i));
	}
	return (NULL);
}
