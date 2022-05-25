/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: progerio <progerio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:07:19 by progerio          #+#    #+#             */
/*   Updated: 2022/04/22 00:12:35 by progerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	fact = 1;
	while (i < nb + 1)
		fact = fact * i++;
	return (fact);
}
