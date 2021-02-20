/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raurelia <raurelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 19:44:51 by raurelia          #+#    #+#             */
/*   Updated: 2021/02/20 23:04:26 by raurelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int res;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ') && (str[i] <= '~'))
		{
			res = 1;
		}
		else
		{
			res = 0;
			break ;
		}
		i++;
	}
	if (str[0] == '\0')
	{
		res = 1;
	}
	return (res);
}
