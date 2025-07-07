/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:17:16 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/26 14:17:20 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char c;
	long n;

	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	if (n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
	}
}

void	ft_atoi(char *s)
{
	int	sign;
	int pos;

	sign = 1;
}
