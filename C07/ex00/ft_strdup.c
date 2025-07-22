/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:10:21 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/19 11:49:55 by mmaquine         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		i;
	int		len_src;
	char	*strdup;

	len_src = ft_strlen(src);
	strdup = (char *)malloc((len_src + 1) * sizeof(char));
	if (strdup == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		strdup[i] = src[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *sdup = ft_strdup(argv[1]);
		if (sdup != NULL)
			printf("%s\n", sdup);
		else
			printf("NULL pointer\n");
	}
}*/
