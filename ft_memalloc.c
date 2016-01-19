/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 15:15:09 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/05 15:34:02 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(size_t) * (size + 1)))
			|| size > 2147483648)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
