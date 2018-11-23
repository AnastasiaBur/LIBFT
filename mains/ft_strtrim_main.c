/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:45:53 by jsanford          #+#    #+#             */
/*   Updated: 2018/11/23 16:05:32 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <headers.h>
#include <stdio.h>

int		main(void)
{
	char *str = "	Hello	world			!     ";
	printf("%s", ft_strtrim(str));
	return (0);
}
