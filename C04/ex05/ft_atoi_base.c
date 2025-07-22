/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:24:00 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/12 18:51:01 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(char *str, char *base);
int	ft_is_in_base(char str, char *base);
int	ft_get_base_number(char *str, char d);
int	ft_get_base(char *str);
int	ft_calc_number(char *str, int pos, char *base);

int	ft_calc_number(char *s, int pos, char *base)
{
	int	exp;
	int	number;
	int	pow;
	int	i;
	int	start;

	exp = 0;
	number = 0;
	pow = 1;
	start = pos;
	while (s[pos] != '\0' && ft_is_in_base(s[pos], base))
		pos++;
	while (--pos >= start)
	{
		i = 0;
		pow = 1;
		while (i++ < exp)
			pow = pow * ft_get_base(base);
		number += pow * (ft_get_base_number(base, s[pos]));
		exp++;
	}
	return (number);
}

int	ft_get_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	if (i == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j++])
				return (0);
		}
		if (str[i] == '+' || str[i] == '-' || str[i++] == ' ')
			return (0);
	}
	return (i);
}

int	ft_get_base_number(char *base, char d)
{
	int	i;

	if (base[0] == d)
		return (0);
	i = 1;
	while (base[i] && base[i] != d)
	{
		i++;
	}
	return (i);
}

int	ft_is_in_base(char digit, char *base)
{
	int	nbase;
	int	i;
	int	is;

	i = 0;
	is = 0;
	nbase = ft_get_base(base);
	while (i < nbase)
	{
		if (base[i] == digit)
			is = 1;
		i++;
	}
	return (is);
}

int	ft_atoi_base(char *s, char *base)
{
	int	i;
	int	sign[2];

	i = 0;
	sign[0] = 0;
	sign[1] = 0;
	while (s[i] != '\0' && !ft_is_in_base(s[i], base))
	{
		if (s[i] == '+')
			sign[1]++;
		if (s[i] == '-')
			sign[0]++;
		if ((s[i] != '+' && s[i] != '-' && s[i] != ' ') || !ft_get_base(base))
			return (0);
		i++;
	}
	if ((sign[0] > 1 || sign[1] > 1) || (sign[0] == sign[1]))
		return (0);
	if (sign[0] == 1 && sign[1] == 0)
		return (-ft_calc_number(s, i, base));
	else
		return (ft_calc_number(s, i, base));
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	else
		printf("Precisa conter 2 parametros: numero e array com base");
}*/