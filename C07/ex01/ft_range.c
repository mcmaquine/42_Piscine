/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:37:14 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/18 11:08:23 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = malloc(size * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{	
	int	min;
	int	max;
	int	size;
	int	*range;

	if (argc == 3)
	{
		int	i;

		i = 0;
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		size = max - min;
		range =	ft_range(min, max);
		if (range != NULL)
		{
			while (min < max)
			{
				printf("%d ", range[i]);
				i++;
				min++;
			}
		}
		else
			printf("rangr is NULL\n");
		printf("\n%lu\n", sizeof(range));
		free(range);
	}
}*/
