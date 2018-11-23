/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:06:11 by jsanford          #+#    #+#             */
/*   Updated: 2018/11/23 20:47:32 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <headers.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return (haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (j + 1 == ft_strlen(needle))
				return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
