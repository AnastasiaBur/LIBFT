/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:50:50 by jsanford          #+#    #+#             */
/*   Updated: 2018/11/23 20:42:11 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <headers.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (c == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (&s[i]);
	}
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
