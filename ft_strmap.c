/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 15:32:22 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/05 15:34:43 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	if (s && f)
	{
		if (!(str = (char *)malloc(ft_strlen(s) + 1)))
			return (NULL);
		while (s[i] != '\0')
		{
			str[i] = (*f)(s[i]);
			i++;
		}
		str[i] = '\0';
		return ((char *)str);
	}
	return (NULL);
}
