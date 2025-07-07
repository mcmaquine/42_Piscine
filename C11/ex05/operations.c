/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 21:39:06 by mmaquine          #+#    #+#             */
/*   Updated: 2025/06/23 21:51:04 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	mult(int n1, int n2)
{
	return (n1 * n2);
}

void	sum(int n1, int n2)
{
	return (n1 + n2);
}

void	div(int n1, int n2)
{
	if (n2 != 0)
		return (n1 / n2);
	else
		write(1, "Stop: division by zero\n", 23);
}

void	mod(int n1, int n2)
{
	if (n2 != 0)
		return (n1 % n2);
	else
		write(1, "Stop: division by zero\n", 23);

void	diff(int n1, int n2)
{
	return (n1 - n2);
}
