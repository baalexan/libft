/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 15:33:13 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/05 15:34:52 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 0;
	b = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		a = i;
		b = 0;
		while (s1[a++] == s2[b++])
		{
			if (s2[b] == '\0')
				return (&((char *)s1)[i]);
		}
		i++;
	}
	return (NULL);
}
