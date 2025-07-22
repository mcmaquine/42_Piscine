/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 09:29:10 by mmaquine          #+#    #+#             */
/*   Updated: 2025/05/29 12:49:52 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char	number_to_write_1[2];
	char	number_to_write_2[2];
	//char	_1strun;

	number_to_write_1[0] = '0';
	number_to_write_2[0] = '0';
	//_1strun = 1;
	while (number_to_write[0] <= '9')
	{
		number_to_write[1] = number_to_write[0] + 1;
		while (number_to_write[1] <= '9')
		{
			write(1, &number_to_write, 2);
			write(1, " ", 1);
			number_to_write[1]++;
		}
		number_to_write[0]++;
		write(1, ", ", 2);
	}
}

int main(void)
{
	ft_print_comb2();
}