/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 19:14:56 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/30 21:08:44 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *s);

char	*ft_hardcpy(char *src)
{
	char	*dest;
	int		i;

	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*st;
	int			i;

	if (ac == 0)
	{
		st = (t_stock_str *)malloc(sizeof(t_stock_str));
		st = NULL;
		return (st);
	}
	else
		st = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (st == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		st[i].size = ft_strlen(av[i]);
		st[i].str = av[i];
		st[i].copy = ft_hardcpy(av[i]);
		i++;
	}
	st[i].str = 0;
	return (st);
}
/*
#include <unistd.h>
void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

int	main(int argc, char **argv)
{
	t_stock_str	*s;

	if (argc > 1)
	{
		s = ft_strs_to_tab(argc - 1, argv);
		int i = 0;
		while (s[i].str != 0)
		{
			ft_putstr(s[i].str);
			write(1, "\n", 1);
			i++;
		}
		free (s);
	}
}*/
