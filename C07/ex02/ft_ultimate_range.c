/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:09:40 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/18 15:37:03 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ar;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ar = (int *)malloc(sizeof(int) * (max - min));
	if (ar == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		ar[i] = min;
		i++;
		min++;
	}
	*range = ar;
	return (i);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int min = atoi(argv[1]);
		int max = atoi(argv[2]);
		int *range;
		int	size;
		
		range = NULL;
		size = ft_ultimate_range(&range, min, max);
		if( size > 0)
		{
			int i = 0;
			while (i < size)
			{
				printf("%d ", range[i]);
				i++;
			}
		}
	}
	else
		printf("Argumentos insuficentes, inserir 2 parametros numericos");
}*/			
