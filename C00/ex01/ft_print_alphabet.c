/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:40:16 by mmaquine          #+#    #+#             */
/*   Updated: 2025/08/01 13:46:12 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	end;
	char	c;

	c = 'a';
	end = 'z';
	while (c <= end)
	{
		write(1, &c, 1);
		c = c + 1;
	}
}
