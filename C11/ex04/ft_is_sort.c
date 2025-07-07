/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 21:15:22 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/24 18:06:34 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	comp;

	i = 0;
	comp = 0;
	while (i < length - 1)
	{
		comp = (*f)(tab[i], tab[i + 1]);
		if (comp < 0)
			return (comp);
	}
	return (comp);
}
