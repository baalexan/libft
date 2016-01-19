/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 15:14:12 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/05 15:33:55 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int less;

	i = 0;
	nbr = 0;
	less = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		less = 1;
		i++;
	}
	if (str[i] == '+' && less == 0)
		i++;
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (less == 1)
		nbr = -nbr;
	return (nbr);
}
