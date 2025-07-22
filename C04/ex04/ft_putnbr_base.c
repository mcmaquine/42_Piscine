/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:57:35 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/12 14:26:04 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		ft_check_base(char *str);

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		if (str[i] == '+' || str[j] == '-')
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	nbase;

	nbase = ft_check_base(base);
	if (nbase < 2)
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= nbase)
	{
		ft_putnbr_base(nbr / nbase, base);
		ft_putnbr_base(nbr % nbase, base);
	}
	if (nbr < nbase)
	{
		write(1, &base[nbr], 1);
	}
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	int n;
	if(argc == 3)
	{
		n = atoi(argv[1]);
		ft_putnbr_base(n, argv[2]);
	}
	else
		printf("Precisa ter 2 parametros: numero e base\n");
}*/
