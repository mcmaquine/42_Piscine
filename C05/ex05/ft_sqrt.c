/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:49:33 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/16 18:24:38 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	x;
	int	xplus1;

	if (nb < 0)
		return (0);
	i = 0;
	xplus1 = nb;
	x = nb;
	while (i < 200)
	{
		x = xplus1;
		xplus1 = (x + nb / x) / 2;
		i++;
	}
	if (xplus1 * xplus1 == nb)
	{	
		if (xplus1 < 0)
			return (-xplus1);
		else
			return (xplus1);
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%d\n", ft_sqrt(atoi(argv[1])));
	}	
}*/
