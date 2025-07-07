/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 20:17:08 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/23 20:33:49 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*r;

	i = 0;
	r = (int *)malloc(length * sizeof(int));
	while (i < length)
	{
		r[i] = (*f)(tab[i]);
		i++;
	}

	return (r);
}
/*#include <stdio.h>
int	main(void)
{
	int	r[] = {0, 1, 5, 6, 7, 6};
	int	*mapped;
	int	i = 0;

	mapped = ft_map(r, 6, &ft_double);
	while ( i < 6 )
	{
		printf("%d ", mapped[i]);
		i++;
	}
}*/
