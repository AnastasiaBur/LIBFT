/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:25:18 by jsanford          #+#    #+#             */
/*   Updated: 2018/11/23 15:30:47 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(char *s, char *s2);
int		main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	printf("\n %s", ft_strjoin(s1, s2));
	return (0);
}

