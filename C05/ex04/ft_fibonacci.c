/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:45:53 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/16 18:18:13 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	nminus1;
	int	n;
	int	temp;

	nminus1 = 0;
	n = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	while (index > 1)
	{
		temp = nminus1 + n;
		nminus1 = n;
		n = temp;
		index--;
	}
	return (n);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%d\n", ft_fibonacci(atoi(argv[1])));
	}
}*/
