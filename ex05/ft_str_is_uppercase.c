/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raurelia <raurelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 19:44:55 by raurelia          #+#    #+#             */
/*   Updated: 2021/02/20 22:51:03 by raurelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int res;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
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
