/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raurelia <raurelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:08:12 by raurelia          #+#    #+#             */
/*   Updated: 2021/02/22 22:27:59 by raurelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		help_dis(int n)
{
	int r;

	r = 0;
	if (n != 0)
	{
		while ((n / 10) != 0)
		{
			r++;
			n /= 10;
		}
		r++;
	}
	return (r);
}

void	positive(int n)
{
	int		i;
	int		r;
	char	c[help_dis(n) + 1];

	i = 2;
	r = help_dis(n) + 1;
	if (n == 0)
	{
		write(1, "0", 1);
		break ;
	}
	while (i <= r)
	{
		c[r - i] = (n % 10) + '0';
		n /= 10;
		i++;
	}

	c[r - 1] = '\0';
	write(1, c, r);
}

void	negative(int n)
{
	int		i;
	char	c[help_dis(n) + 2];
	int		r;

	i = 2;
	r = help_dis(n) + 2;
	c[0] = '-';
	n *= -1;
	while (i <= r)
	{
		c[r - i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	c[0] = '-';
	c[r - 1] = '\0';
	write(1, c, r);
}

void	ft_putnbr(int n)
{
	if (n >= 0)
	{
		positive(n);
	}
	else
	{
		negative(n);
	}
}
