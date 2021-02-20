/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raurelia <raurelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 19:44:59 by raurelia          #+#    #+#             */
/*   Updated: 2021/02/20 23:17:21 by raurelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	str[i] += 'A' - 'a';
	while (str[i] != EOF)
	{
		if ((str[i] >= ' ') && (str[i] <= '/'))
		{
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
			{
				str[i + 1] += 'A' - 'a';
			}
		}
		if ((str[i] >= ':') && (str[i] <= '?'))
		{
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
			{
				str[i + 1] += 'A' - 'a';
			}
		}
		i++;
	}
	return (str);
}
