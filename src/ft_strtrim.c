/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:34:29 by jsanford          #+#    #+#             */
/*   Updated: 2018/11/23 20:45:24 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_skip(const char *s, int beginning, int sign)
{
	int i;

	i = beginning;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i += sign;
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char	*new;
	int		i;
	int		max;
	int		n;

	n = 0;
	i = ft_skip(s, 0, 1);
	max = ft_skip(s, ft_strlen(s) - 1, -1);
	new = (char *)malloc(ft_strlen(s) + 1);
	while (i <= max)
	{
		new[n] = s[i];
		n++;
		i++;
	}
	new[n] = '\0';
	return (new);
}
