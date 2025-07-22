/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:24:00 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/12 14:31:33 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);
int	ft_is_number(char str);
int	ft_pow10(int e);
int	ft_is_spc_or_sig(char c);
int	ft_calc_number(char *str, int pos, int start_number, int sminus);

int	ft_calc_number(char *str, int pos, int start_number, int sminus)
{
	int	number;
	int	exp;

	number = 0;
	exp = 0;
	while (--pos >= start_number && ft_is_number(str[pos]))
		number += ft_pow10(exp++) * (str[pos] - '0');
	if (sminus % 2 == 0)
		return (number);
	else
		return (-number);
}

int	ft_is_spc_or_sgn(char c)
{
	if (c == ' ' || c == '+' || c == '-')
		return (1);
	else
		return (0);
}

int	ft_pow10(int e)
{
	int	i;
	int	pow;

	i = -1;
	pow = 1;
	while (++i < e)
		pow = pow * 10;
	return (pow);
}

int	ft_is_number(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	start_number;
	int	pos;
	int	sminus;

	sminus = 0;
	pos = 0;
	while (str[pos])
	{
		if (ft_is_number(str[pos]))
			break ;
		if (!ft_is_spc_or_sgn(str[pos]))
			return (0);
		if (str[pos++] == '-')
			sminus++;
	}
	start_number = pos;
	while (str[pos] && ft_is_number(str[pos]))
		pos++;
	return (ft_calc_number(str, pos, start_number, sminus));
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", ft_atoi(argv[1]));
}*/