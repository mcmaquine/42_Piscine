/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:45:52 by mmaquine          #+#    #+#             */
/*   Updated: 2025/05/29 09:28:19 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	numero[3];
	int		_1strun;

	_1strun = 1;
	numero[0] = '0';
	while (numero[0] <= '9')
	{	
		numero[1] = numero[0] + 1;
		while (numero[1] <= '9')
		{
			numero[2] = numero[1] + 1;
			while (numero[2] <= '9')
			{
				if (!_1strun)
					write(1, ", ", 2);
				else
					_1strun = 0;
				write(1, &numero, 3);
				numero[2]++;
			}
			numero[1]++;
		}
		numero[0]++;
	}
	write(1, "\n", 1);
}
