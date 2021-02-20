/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_str_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raurelia <raurelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 22:37:37 by raurelia          #+#    #+#             */
/*   Updated: 2021/02/20 22:42:03 by raurelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int res;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
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
