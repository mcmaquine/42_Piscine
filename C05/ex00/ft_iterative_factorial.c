/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 09:38:38 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/16 17:31:10 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fat;

	if (nb < 0)
		return (0);
	fat = 1;
	while (nb > 1)
	{
		fat = fat * nb;
		nb--;
	}
	return (fat);
}
