/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:12:57 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/16 18:34:13 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	p;

	p = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (p);
	while (power > 0)
	{
		p = p * nb;
		power--;
	}
	return (p);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{	
	if (argc == 3)
	printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}*/
