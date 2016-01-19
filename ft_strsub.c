/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 15:33:18 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/05 15:34:54 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = start;
	if (!s)
		return (NULL);
	str = NULL;
	if (!(str = (char *)malloc(sizeof(*s) * (len + 1))))
		return (NULL);
	while (j < start + len && s[j] != '\0')
		str[i++] = s[j++];
	str[i] = '\0';
	return (str);
}
