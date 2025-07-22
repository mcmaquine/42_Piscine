/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:05:25 by mmaquine          #+#    #+#             */
/*   Updated: 2025/05/29 12:58:12 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

#define INT_MIN -2147483648
#define INT_MAX 2147483647

void	ft_putnbr(int nb);

int	main(void)
{
	printf("%d %d", INT_MIN, INT_MAX);
}
