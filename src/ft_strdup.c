/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 13:42:36 by jsanford          #+#    #+#             */
/*   Updated: 2018/11/23 20:22:47 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <headers.h>

char		*ft_strdup(const char *str)
{
	char	*res;
	int		i;

	i = 0;
	res = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i] != '\0')
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
