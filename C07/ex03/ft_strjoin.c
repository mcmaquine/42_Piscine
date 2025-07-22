/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:45:38 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/19 18:30:10 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	int	i;
	int	lsrc;

	lsrc = ft_strlen(src);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void	*ft_strcat(char *s1, char *s2)
{
	int	pos;
	int	len;

	pos = 0;
	len = ft_strlen(s1);
	while (*s2)
	{
		s1[len + pos] = *s2;
		pos++;
		s2++;
	}
	s1[len + pos] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		tlen;
	int		i;
	char	*join;

	if (size == 0)
	{
		join = (char *)malloc(0 * sizeof(char));
		return (join);
	}
	i = 0;
	tlen = 0;
	while (i < size)
	{
		tlen += ft_strlen(strs[i++]);
	}
	join = (char *)malloc((tlen + (size - 1) * ft_strlen(sep)) * sizeof(char));
	join = ft_strcpy(join, strs[0]);
	i = 1;
	while (i < size)
	{
		join = ft_strcat(join, sep);
		join = ft_strcat(join, strs[i++]);
	}
	join[tlen + (size - 1) * ft_strlen(sep)] = '\0';
	return (join);
}
/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*s;

	if (argc > 1)
	{
		s = ft_strjoin(argc, argv, ",");
		printf("%s\n", s);
	}
	else
		printf("Inserir parametros\n");
}*/