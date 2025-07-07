/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:18:31 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/01 17:25:51 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset);
int		ft_strlen(char *s);
int		ft_count_words(char *s, char *sep);
int		ft_is_sep(char *s, char *charset);

int		ft_is_sep(char *s, char *charset)
{
	int	n;
	int	i;

	n = ft_strlen(charset);
	i = 0;
	while (i < n)
	{
		if (*(s + i) != charset[i])
			return (0);
		i++;
	}
	return (1);
}

int		ft_count_words(char *s, char *sep)
{
}

char	**ft_split(char *str, char *charset)
{
}
